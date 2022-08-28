#pragma once

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
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Button^ buttonClear2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ buttonClear1;
	private: System::Windows::Forms::Button^ buttonCheck1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItem1;
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonClear2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonClear1 = (gcnew System::Windows::Forms::Button());
			this->buttonCheck1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonClear2);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(447, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(491, 426);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Елемент listBox1";
			// 
			// buttonClear2
			// 
			this->buttonClear2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear2->Location = System::Drawing::Point(312, 247);
			this->buttonClear2->Name = L"buttonClear2";
			this->buttonClear2->Size = System::Drawing::Size(162, 49);
			this->buttonClear2->TabIndex = 2;
			this->buttonClear2->Text = L"Очистити";
			this->buttonClear2->UseVisualStyleBackColor = true;
			this->buttonClear2->Click += gcnew System::EventHandler(this, &Form1::buttonClear2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Controls->Add(this->radioButton7);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Location = System::Drawing::Point(312, 43);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(162, 150);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"TEXT COLOR";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton8->Location = System::Drawing::Point(16, 112);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(94, 24);
			this->radioButton8->TabIndex = 3;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Жовтий";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::Color_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->Location = System::Drawing::Point(16, 86);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(76, 24);
			this->radioButton7->TabIndex = 2;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Синій";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::Color_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(16, 60);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(102, 24);
			this->radioButton6->TabIndex = 1;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Зелений";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::Color_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(16, 34);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(113, 24);
			this->radioButton5->TabIndex = 0;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Червоний";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::Color_CheckedChanged);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(6, 43);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(289, 344);
			this->listBox1->TabIndex = 0;
			this->listBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::listBox1_KeyDown);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonClear1);
			this->groupBox1->Controls->Add(this->buttonCheck1);
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Controls->Add(this->checkedListBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(406, 426);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Елемент checkedListBox1";
			// 
			// buttonClear1
			// 
			this->buttonClear1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear1->Location = System::Drawing::Point(219, 273);
			this->buttonClear1->Name = L"buttonClear1";
			this->buttonClear1->Size = System::Drawing::Size(150, 35);
			this->buttonClear1->TabIndex = 5;
			this->buttonClear1->Text = L"Скинути";
			this->buttonClear1->UseVisualStyleBackColor = true;
			this->buttonClear1->Click += gcnew System::EventHandler(this, &Form1::buttonClear1_Click);
			// 
			// buttonCheck1
			// 
			this->buttonCheck1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCheck1->Location = System::Drawing::Point(219, 218);
			this->buttonCheck1->Name = L"buttonCheck1";
			this->buttonCheck1->Size = System::Drawing::Size(150, 37);
			this->buttonCheck1->TabIndex = 4;
			this->buttonCheck1->Text = L"Вибрати";
			this->buttonCheck1->UseVisualStyleBackColor = true;
			this->buttonCheck1->Click += gcnew System::EventHandler(this, &Form1::buttonCheck1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(17, 200);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 142);
			this->panel1->TabIndex = 1;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(26, 103);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(78, 24);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Італія";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(26, 73);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(87, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Іспанія";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(26, 47);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(119, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Німеччина";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(26, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"США";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_CheckedChanged);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Едрієн Броуді", L"Тіль Швайґер", L"Моріц Бляйбтрой",
					L"Мікеле Плачидо", L"Марчелло Мастроянні", L"Роберто Беніньї", L"Антоніо де ла Торре", L"Хайме Лоренте", L"Робін Вільямс"
			});
			this->checkedListBox1->Location = System::Drawing::Point(17, 43);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(352, 136);
			this->checkedListBox1->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ToolStripMenuItem1 });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(161, 28);
			// 
			// ToolStripMenuItem1
			// 
			this->ToolStripMenuItem1->Name = L"ToolStripMenuItem1";
			this->ToolStripMenuItem1->Size = System::Drawing::Size(160, 24);
			this->ToolStripMenuItem1->Text = L"Вибрати всі";
			this->ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::ToolStripMenuItem1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(958, 466);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Form_App1";
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonCheck1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		listbox_check();
		for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++)
		{
			listBox1->Items->Add(checkedListBox1->CheckedItems[i]);
		}
	}

	private: System::Void buttonClear1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		clear_check();
		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;
	}

	private: System::Void buttonClear2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		listbox_check();
	}

	private: void clear_check()
	{
		for (int i = 0; i < checkedListBox1->Items->Count; i++)
		{
			checkedListBox1->SetItemChecked(i, false);
		}
	}
	private: void listbox_check()
	{
		for (int i = 0; i < listBox1->Items->Count; i++)
		{
			listBox1->Items->Clear();
		}
	}
	private: System::Void radioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (radioButton1->Checked)
		{
			clear_check();
			for (int i = 0; i < checkedListBox1->Items->Count; i++)
			{
				if (i == 0 || i == 8)
				{
					checkedListBox1->SetItemChecked(i, true);
				}
			}
		}
		if (radioButton2->Checked)
		{
			clear_check();
			for (int i = 0; i < checkedListBox1->Items->Count; i++)
			{
				if (i == 1 || i == 2)
				{
					checkedListBox1->SetItemChecked(i, true);
				}
			}
		}
		if (radioButton3->Checked)
		{
			clear_check();
			for (int i = 0; i < checkedListBox1->Items->Count; i++)
			{
				if (i == 3 || i == 4 || i == 5)
				{
					checkedListBox1->SetItemChecked(i, true);
				}
			}
		}
		if (radioButton4->Checked)
		{
			clear_check();
			for (int i = 0; i < checkedListBox1->Items->Count; i++)
			{
				if (i == 6 || i == 7)
				{
					checkedListBox1->SetItemChecked(i, true);
				}
			}
		}
	}

	private: System::Void Color_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (radioButton5->Checked)
		{
			listBox1->ForeColor = Color::Red;
		}
		if (radioButton6->Checked)
		{
			listBox1->ForeColor = Color::Green;
		}
		if (radioButton7->Checked)
		{
			listBox1->ForeColor = Color::Blue;
		}
		if (radioButton8->Checked)
		{
			listBox1->ForeColor = Color::Yellow;
		}
		listBox1->Refresh();
	}

	private: System::Void ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < checkedListBox1->Items->Count; i++)
		{
			checkedListBox1->SetItemChecked(i, true);
		}
	}

	private: System::Void listBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
	{
		if (e->Shift && e->KeyCode == Keys::E)
		{
			if (listBox1->SelectedItems->Count != 0)
			{
				MessageBox::Show(listBox1->SelectedItem->ToString(), "Message",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
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
};
}
