#pragma once
#include <string>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			this->helpProvider1->HelpNamespace = Application::StartupPath + "\\help.txt";
			this->helpProvider1->SetShowHelp(this, true);
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonOk;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(22, 38);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(884, 368);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->buttonAdd);
			this->tabPage1->Controls->Add(this->numericUpDown1);
			this->tabPage1->Controls->Add(this->domainUpDown1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(876, 335);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Лікарства";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(475, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(173, 38);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Замовлення";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(390, 50);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(341, 244);
			this->listBox1->TabIndex = 5;
			this->listBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::listBox1_KeyDown);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(70, 147);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(248, 46);
			this->buttonAdd->TabIndex = 4;
			this->buttonAdd->Text = L"Додати";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonAdd_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(149, 80);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(182, 27);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->domainUpDown1->Items->Add(L"Аміодарон");
			this->domainUpDown1->Items->Add(L"Амлодипін");
			this->domainUpDown1->Items->Add(L"Варфарин");
			this->domainUpDown1->Items->Add(L"Еналаприл");
			this->domainUpDown1->Items->Add(L"Бісопролол");
			this->domainUpDown1->Items->Add(L"Фуросемід");
			this->domainUpDown1->Items->Add(L"Карведілол");
			this->domainUpDown1->Items->Add(L"Ніфедипін");
			this->domainUpDown1->Location = System::Drawing::Point(149, 37);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(182, 27);
			this->domainUpDown1->TabIndex = 2;
			this->domainUpDown1->Text = L"domainUpDown1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Кількість";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(27, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Лікарство";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->buttonOk);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->radioButton2);
			this->tabPage2->Controls->Add(this->radioButton1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(876, 335);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Оформлення";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Location = System::Drawing::Point(22, 158);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(789, 137);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			this->richTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::richTextBox1_KeyDown);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->clearToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(158, 28);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(157, 24);
			this->clearToolStripMenuItem->Text = L"ОЧИСТИТИ";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clearToolStripMenuItem_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Script", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(307, 117);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 38);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Рахунок";
			// 
			// buttonOk
			// 
			this->buttonOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOk->Location = System::Drawing::Point(545, 61);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(192, 44);
			this->buttonOk->TabIndex = 8;
			this->buttonOk->Text = L"ОК";
			this->buttonOk->UseVisualStyleBackColor = true;
			this->buttonOk->Click += gcnew System::EventHandler(this, &Form1::buttonOk_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(631, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(518, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"ID Клієнта";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(284, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 27);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(284, 18);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(186, 28);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(214, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Клієнт";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(214, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Клієнт";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(22, 57);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(140, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Новий клієнт";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(22, 18);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(173, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Постійний клієнт";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_CheckedChanged);
			// 
			// helpProvider1
			// 
			this->helpProvider1->HelpNamespace = L"";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileName = L"result";
			this->saveFileDialog1->Filter = L"Word files (*.rtf)||All files (*.*)|*.*";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 438);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &Form1::Form1_HelpRequested);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		static int number = 1;

	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		listBox1->Items->Add(domainUpDown1->SelectedItem + "\t\t" + numericUpDown1->Value);
	}

	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e)
	{
		richTextBox1->Clear();

		richTextBox1->Text += "ID Клієнта: " + label6->Text;
		richTextBox1->Text += "\n";
		richTextBox1->Text += "Ім'я Клієнта: ";

		if (radioButton1->Checked)
		{
			richTextBox1->Text += comboBox1->SelectedItem;
		}
		if (radioButton2->Checked)
		{
			richTextBox1->Text += textBox1->Text;
		}
		richTextBox1->Text += "\n\n";
		richTextBox1->Text += "Замовлення:\n";
		richTextBox1->Text += "Лікарство\t\tКількість\n";

		for (int i = 0; i < listBox1->Items->Count; i++)
		{
			richTextBox1->Text += listBox1->Items[i];
			richTextBox1->Text += "\n";
		}

		number++;
	}
	private: System::Void listBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->KeyCode == Keys::Delete || (e->Shift && e->KeyCode == Keys::D))
		{
			if (listBox1->SelectedItems->Count != 0)
			{
				ListBox::SelectedObjectCollection^ selectedItems = listBox1->SelectedItems;

				for (int i = selectedItems->Count - 1; i >= 0; i--)
					listBox1->Items->Remove(selectedItems[i]);

			}
			else if (listBox1->SelectedItems->Count == 0 && listBox1->Items->Count != 0)
			{
				MessageBox::Show("There is not selected item in ListBox!", "Message",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				MessageBox::Show("ListBox is empty!", "Message",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	private: System::Void Form1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent)
	{
		Help::ShowHelp(this, helpProvider1->HelpNamespace);
	}


	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		comboBox1->Items->Add("Klisch Anatolii");
		comboBox1->Items->Add("Mykhailov Petro");
		comboBox1->Items->Add("Ivasyk Igor");
		comboBox1->Items->Add("Kotsur Inna");
		comboBox1->Items->Add("Vasylchuk Ivan");
		domainUpDown1->SelectedItem = domainUpDown1->Items[0];
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		label6->Text = "ID_00" + (comboBox1->SelectedIndex + 1).ToString();
		radioButton1->Checked = true;
	}

	private: System::Void radioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (radioButton1->Checked)
		{
			textBox1->ReadOnly = true;
			comboBox1->Enabled = true;
		}
		if (radioButton2->Checked)
		{
			textBox1->ReadOnly = false;
			comboBox1->Enabled = false;
		}
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		radioButton2->Checked = true;
		label6->Text = "ID_" + DateTime::Now.Day + "_" + DateTime::Now.Month + "_" + DateTime::Now.Year + "_00" + number;
	}

	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		richTextBox1->Clear();
	}

	private: System::Void richTextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->Control && e->KeyCode == Keys::S)
		{
			if (String::IsNullOrEmpty(richTextBox1->Text))
			{
				MessageBox::Show("Текст з richtextbox пустий");
				return;
			}
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				return;
			String^ filename = saveFileDialog1->FileName;
			System::IO::File::WriteAllText(filename, richTextBox1->Text);
			MessageBox::Show("Текст з richtextbox збережений у файл");
		}
	}
	};
}

