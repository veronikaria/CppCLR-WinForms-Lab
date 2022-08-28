#pragma once
#include "resource.h"

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
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			this->isPass = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::MaskedTextBox^ dynamicMaskedTextBox;
	public: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	public: bool isPass=false;


	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dynamicMaskedTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());

			//
			// label1
			//
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans Serif", 11.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));

			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 50);
			this->label1->Text = L"Введіть пароль";
			this->label1->Location = System::Drawing::Point(90, 50);

			//
			// button1
			//
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));

			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 50);
			this->button1->Location = System::Drawing::Point(100, 140);
			this->button1->Image = Image::FromFile(Application::StartupPath + "\\img.png");
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);


			//
			// dynamicMaskedTextBox
			// 
			this->dynamicMaskedTextBox->Font = gcnew System::Drawing::Font("Times New Roman", 14);
			this->dynamicMaskedTextBox->Location = System::Drawing::Point(50, 90);
			this->dynamicMaskedTextBox->Name = L"dynamicMaskedTextBox";
			//this->dynamicMaskedTextBox->Size = System::Drawing::Size(100, 20);
			this->dynamicMaskedTextBox->Height = 40;
			this->dynamicMaskedTextBox->Width = 200;
			this->dynamicMaskedTextBox->PasswordChar = '*';
			this->dynamicMaskedTextBox->Mask = "0000aaa";
			this->dynamicMaskedTextBox->TextAlign = HorizontalAlignment::Center;

			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 300);
			
			this->Name = L"Form2";
			this->Text = L"Form2";

			this->Controls->Add(dynamicMaskedTextBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (this->dynamicMaskedTextBox->Text== "1221pas")
			{
				this->isPass = true;
				MessageBox::Show("Пароль вірний! Натисніть ОК для виходу на головну!");
				this->Close();
			}
			else
			{
				this->isPass = false;
				MessageBox::Show("Пароль НЕ вірний! Спробуйте ще раз!");
			}
		}
		   
	};
}
