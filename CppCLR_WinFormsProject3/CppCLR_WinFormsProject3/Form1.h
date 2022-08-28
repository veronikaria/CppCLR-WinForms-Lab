#pragma once
#include "Form2.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ File_ProductsToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: CppCLRWinFormsProject::Form2^ form_password;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	public: System::Boolean isChange;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnName;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnQuantity;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ ColumnAviability;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->File_ProductsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnAviability = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(3, 361);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(795, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Зберегти дані";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->infoToolStripMenuItem, this->toolStripComboBox1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(859, 32);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->File_ProductsToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(182, 28);
			this->fileToolStripMenuItem->Text = L"Інформація з файлами";
			// 
			// File_ProductsToolStripMenuItem
			// 
			this->File_ProductsToolStripMenuItem->Name = L"File_ProductsToolStripMenuItem";
			this->File_ProductsToolStripMenuItem->Size = System::Drawing::Size(299, 26);
			this->File_ProductsToolStripMenuItem->Text = L"Завантажити дані про товари";
			this->File_ProductsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::File_ProductsToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(299, 26);
			this->editToolStripMenuItem->Text = L"Редагувати файл товарів";
			this->editToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::editToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(104, 28);
			this->infoToolStripMenuItem->Text = L"Інформація";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::infoToolStripMenuItem_Click);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->DropDownWidth = 250;
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Режим роботи клієнта", L"Режим роботи адміністратора" });
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(220, 28);
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::toolStripComboBox1_SelectedIndexChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(15, 57);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(809, 425);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(801, 396);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Інформація";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(22, 16);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(634, 354);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(801, 396);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Дані про товари";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColumnName,
					this->ColumnPrice, this->ColumnQuantity, this->ColumnAviability
			});
			this->dataGridView1->Location = System::Drawing::Point(28, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(743, 303);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellBeginEdit += gcnew System::Windows::Forms::DataGridViewCellCancelEventHandler(this, &Form1::dataGridView1_CellBeginEdit);
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView_CheckPrice);
			// 
			// ColumnName
			// 
			this->ColumnName->HeaderText = L"Назва";
			this->ColumnName->MinimumWidth = 6;
			this->ColumnName->Name = L"ColumnName";
			this->ColumnName->Width = 125;
			// 
			// ColumnPrice
			// 
			this->ColumnPrice->HeaderText = L"Ціна";
			this->ColumnPrice->MinimumWidth = 6;
			this->ColumnPrice->Name = L"ColumnPrice";
			this->ColumnPrice->Width = 125;
			// 
			// ColumnQuantity
			// 
			this->ColumnQuantity->HeaderText = L"Кількість";
			this->ColumnQuantity->MinimumWidth = 6;
			this->ColumnQuantity->Name = L"ColumnQuantity";
			this->ColumnQuantity->Width = 125;
			// 
			// ColumnAviability
			// 
			this->ColumnAviability->HeaderText = L"Наявність";
			this->ColumnAviability->MinimumWidth = 6;
			this->ColumnAviability->Name = L"ColumnAviability";
			this->ColumnAviability->ReadOnly = true;
			this->ColumnAviability->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->ColumnAviability->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->ColumnAviability->Width = 125;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Text files (*.txt)||All files (*.*)|*.*";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 520);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::Cancel)
			return;
		String^ filename = saveFileDialog1->FileName;

		String^ res = "";
		for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
		{
			for (int j = 0; j < dataGridView1->Columns->Count-1; j++)
			{
				res += dataGridView1->Rows[i]->Cells[j]->Value;
				res += "\t";
			}
			res += "\n";
		}
		File::WriteAllText(filename, res);

		MessageBox::Show("Збережено у файл!");
	}

	private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fillRichTextBox();
		fillDataGridView();
		this->tabControl1->Visible = true;
		this->tabControl1->Refresh();
		if (!this->form_password->isPass)
		{
			this->dataGridView1->ReadOnly = true;
			this->richTextBox1->ReadOnly = true;
			this->button1->Enabled = false;
			this->dataGridView1->Refresh();
			this->richTextBox1->Refresh();
		}
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		fileToolStripMenuItem->Enabled = false;
		infoToolStripMenuItem->Enabled = false;
		this->tabControl1->Visible = false;
		this->button1->Enabled = false;
		isChange = false;
		this->form_password = gcnew Form2();

	}

	private: System::Void toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (toolStripComboBox1->SelectedItem == toolStripComboBox1->Items[0])
		{
			infoToolStripMenuItem->Enabled = true;
			this->button1->Enabled = false;
		}
		if (toolStripComboBox1->SelectedItem == toolStripComboBox1->Items[1])
		{
			this->form_password = gcnew Form2();
			this->form_password->ShowDialog();

			if (this->form_password->isPass)
			{
				fileToolStripMenuItem->Enabled = true;
				infoToolStripMenuItem->Enabled = true;
				this->dataGridView1->ReadOnly = false;
				this->richTextBox1->ReadOnly = false;
			}
			else
			{
				this->dataGridView1->ReadOnly = true;
				this->richTextBox1->ReadOnly = true;
			}
		}
	}

	private: System::Void File_ProductsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::Cancel)
			return;
		String^ filename = openFileDialog1->FileName;
		String^ fileText = File::ReadAllText(filename);
		richTextBox1->Text = fileText;
		MessageBox::Show("Файл зчитано!");
	}

	private: System::Void editToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ file = "";
		if (String::IsNullOrEmpty(openFileDialog1->FileName))
			file = Application::StartupPath + "\\products\\products_1.txt";
		else
			file = openFileDialog1->FileName;
		System::IO::File::WriteAllText(file, richTextBox1->Text);
		MessageBox::Show("Зміни збережені у файл " + file + "!");
	}


	private: Void fillRichTextBox()
	{
		this->richTextBox1->Clear();
		this->richTextBox1->Refresh();
		array<String^>^ lines = File::ReadAllLines(Application::StartupPath + "\\products\\products_1.txt", Encoding::UTF8);
		for (size_t i = 0; i < lines->Length; i++)
		{
			this->richTextBox1->Text += lines[i];
			this->richTextBox1->Text += "\n";
		}
	}
	private: Void fillDataGridView()
	{
		this->dataGridView1->Rows->Clear();
		this->dataGridView1->Refresh();
		array<String^>^ lines = File::ReadAllLines(Application::StartupPath + "\\products\\products_2.txt", Encoding::UTF8);
		for (size_t i = 1; i < lines->Length; i++)
		{
			array<String^>^ values = lines[i]->Split('\t');
			System::Double cnt = System::Double::Parse(values[2]);
			if (cnt < 0)
				cnt = 0;
			if (cnt == 0)
				this->dataGridView1->Rows->Add(values[0], Double::Parse(values[1]), 0, false);
			else																    
				this->dataGridView1->Rows->Add(values[0], Double::Parse(values[1]), Double::Parse(values[2]), true);
		}
	}
	private: Void dataGridView_CheckPrice(Object^ sender, Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		int col = dataGridView1->CurrentCell->ColumnIndex;
		if (col == 2)
		{
			Double data = Double::Parse(dataGridView1->CurrentCell->Value->ToString());
			int row = dataGridView1->CurrentCell->RowIndex;
			if (data <= 0.0)
			{
				dataGridView1->CurrentCell->Value = 0;
				dataGridView1->Rows[row]->Cells[col + 1]->Value = false;
			}
			else
			{
				dataGridView1->Rows[row]->Cells[col + 1]->Value = true;
			}
		}
	}
	private: System::Void dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e) 
	{
		this->button1->Enabled = true;
	}
	

	private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
	{
		Windows::Forms::DialogResult exit = Windows::Forms::MessageBox::Show("Ви точно хочете вийти із програми?", "Вихід", Windows::Forms::MessageBoxButtons::YesNo);
		if (exit == Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
	}

};
}
