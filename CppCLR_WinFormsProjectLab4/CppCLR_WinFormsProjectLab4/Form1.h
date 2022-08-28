#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Data::Odbc;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public: ref struct MyStruct
	{
		String^ name;
		String^ descr;
		String^ portion;
		String^ type;
		int price;
		int count;
	};
		OdbcConnection^ conn = gcnew OdbcConnection();
		OdbcCommand^ MyCommand;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::RichTextBox^ richTextBoxDescr;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxId;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBoxType;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownPrice;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxPortion;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button3;
	public:
		OdbcDataReader^ MyDataReader;

		void connect()
		{
			conn->ConnectionString = "Dsn=MySQLMarket";
			MyCommand = gcnew OdbcCommand("", conn);
			try
			{
				conn->Open();
			}
			catch (Exception^ ee)
			{
				MessageBox::Show("Error:" + ee->Message->ToString());
			}
		}
		List<MyStruct^>^ getInfo()
		{
			List<MyStruct^>^ infoData = gcnew List<MyStruct^>();
			MyStruct^ info_struct;
			connect();

			try
			{
				MyCommand->CommandText = "SELECT Name_dish AS `Назва`, Descript AS `Опис`, Portion AS `Порція`, Price AS `Ціна`, `Type` AS `Тип` FROM dish d JOIN `type` t ON d.idtype = t.idtype"; 
				MyDataReader = MyCommand->ExecuteReader();

				while (MyDataReader->Read())
				{
					info_struct = gcnew MyStruct();
					info_struct->name = MyDataReader->GetString(0);
					info_struct->descr = MyDataReader->GetString(1);
					info_struct->portion = MyDataReader->GetString(2);
					info_struct->price = MyDataReader->GetInt16(3);
					info_struct->type = MyDataReader->GetString(4);
					infoData->Add(info_struct);
				}

				MyDataReader->Close();
			}
			catch (Exception^ ee)
			{
				MessageBox::Show("Error:" + ee->Message->ToString());
			}
			finally
			{
				conn->Close();
			}
			return infoData;
		}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		dataGridView2->Columns->Add("idorder", "Номер");
		dataGridView2->Columns->Add("iddish", "Товар");
		dataGridView2->Columns->Add("idcheck", "Чек");
		dataGridView2->Columns->Add("count", "Кількість");
		dataGridView2->Columns->Add("price", "Ціна");

		connect();

		try
		{
			MyCommand->CommandText = "SELECT * FROM `order`";
			MyDataReader = MyCommand->ExecuteReader();

			while (MyDataReader->Read())
			{
				dataGridView2->Rows->Add(MyDataReader->GetInt32(0), MyDataReader->GetInt32(1), MyDataReader->GetInt32(2),
					MyDataReader->GetInt16(3), MyDataReader->GetInt16(4));
			}

			MyDataReader->Close();
		}
		catch (Exception^ ee)
		{
			MessageBox::Show("Error:" + ee->Message->ToString());
		}
		finally
		{
			conn->Close();
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		List<MyStruct^>^ Data = gcnew List<MyStruct^>();
		MyStruct^ info = gcnew MyStruct();
		Data = getInfo();
		dataGridView1->Columns->Add("name", "Назва");
		dataGridView1->Columns->Add("descr", "Опис");
		dataGridView1->Columns->Add("portion", "Порція");
		dataGridView1->Columns->Add("price", "Ціна");
		dataGridView1->Columns->Add("type", "Тип");

		for (int i = 0; i < Data->Count; i++)
		{
			info = Data[i];
			
			dataGridView1->Rows->Add(info->name, info->descr, info->portion, info->price, info->type);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		connect();
		try
		{
			MyCommand->CommandText = "SELECT idtype FROM `type` WHERE `Type`='" +comboBoxType->SelectedItem+"'";
			System::Object^ idtype = MyCommand->ExecuteScalar();
			int id_d = Int32::Parse(textBoxId->Text);
			String^ sql = "INSERT INTO dish (iddish, Name_dish, Descript, Portion, Price, idtype) VALUES (" + id_d + ", '" + textBoxName->Text + "', '" +
				richTextBoxDescr->Text + "', '" + textBoxPortion->Text + "', '" + numericUpDownPrice->Value + "', " + idtype + ");";
			MyCommand->CommandText = sql;

			MyCommand->ExecuteNonQuery();

			MyDataReader->Close();

			MessageBox::Show("Дані успішно добавлені в базу даних!");
		}
		catch (Exception^ ee)
		{
			MessageBox::Show("Error:" + ee->Message->ToString());
		}
		finally
		{
			conn->Close();
		}
	}


	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->tabControl1->SelectedIndex == 1)
		{
			comboBoxType->Items->Clear();
			comboBoxType->Refresh();
			connect();
			try
			{
				MyCommand->CommandText = "SELECT iddish FROM dish ORDER BY iddish DESC LIMIT 1";
				System::Object^ obj = MyCommand->ExecuteScalar();
				int id = (int)obj + 1;
				textBoxId->Text = id.ToString();

				MyCommand->CommandText = "SELECT `Type` FROM `type`";
				MyDataReader = MyCommand->ExecuteReader();

				while (MyDataReader->Read())
				{
					comboBoxType->Items->Add(MyDataReader->GetString(0));
				}

				MyDataReader->Close();
			}
			catch (Exception^ ee)
			{
				MessageBox::Show("Error:" + ee->Message->ToString());
			}
			finally
			{
				conn->Close();
			}
		}
	}

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBoxType = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDownPrice = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxPortion = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxDescr = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrice))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(46, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(802, 333);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(877, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Завантажити дані ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(13, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(891, 454);
			this->tabControl1->TabIndex = 2;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(883, 416);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Всі товари";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->comboBoxType);
			this->tabPage2->Controls->Add(this->numericUpDownPrice);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBoxPortion);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->richTextBoxDescr);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->textBoxName);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->textBoxId);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(883, 416);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Додати дані";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(465, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(359, 47);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Зберегти нові дані";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(460, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 25);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Тип";
			// 
			// comboBoxType
			// 
			this->comboBoxType->FormattingEnabled = true;
			this->comboBoxType->Location = System::Drawing::Point(546, 160);
			this->comboBoxType->Name = L"comboBoxType";
			this->comboBoxType->Size = System::Drawing::Size(248, 33);
			this->comboBoxType->TabIndex = 11;
			// 
			// numericUpDownPrice
			// 
			this->numericUpDownPrice->Location = System::Drawing::Point(546, 96);
			this->numericUpDownPrice->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDownPrice->Name = L"numericUpDownPrice";
			this->numericUpDownPrice->Size = System::Drawing::Size(247, 30);
			this->numericUpDownPrice->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(460, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ціна";
			// 
			// textBoxPortion
			// 
			this->textBoxPortion->Location = System::Drawing::Point(547, 32);
			this->textBoxPortion->Name = L"textBoxPortion";
			this->textBoxPortion->Size = System::Drawing::Size(247, 30);
			this->textBoxPortion->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(460, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Порція";
			// 
			// richTextBoxDescr
			// 
			this->richTextBoxDescr->Location = System::Drawing::Point(127, 173);
			this->richTextBoxDescr->Name = L"richTextBoxDescr";
			this->richTextBoxDescr->Size = System::Drawing::Size(286, 159);
			this->richTextBoxDescr->TabIndex = 5;
			this->richTextBoxDescr->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Опис";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(127, 100);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(286, 30);
			this->textBoxName->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Назва";
			// 
			// textBoxId
			// 
			this->textBoxId->Location = System::Drawing::Point(127, 30);
			this->textBoxId->Name = L"textBoxId";
			this->textBoxId->ReadOnly = true;
			this->textBoxId->Size = System::Drawing::Size(286, 30);
			this->textBoxId->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Location = System::Drawing::Point(4, 34);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(883, 416);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Замовлення";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(40, 42);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(802, 306);
			this->dataGridView2->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button3->Location = System::Drawing::Point(0, 371);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(883, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Завантажити замовлення";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1038, 470);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrice))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	

};
}
