#pragma once
#include<iostream>
#include<string>

namespace login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for parentForm
	/// </summary>
	public ref class parentForm : public System::Windows::Forms::Form
	{
	public:
		String^ user;
		parentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		parentForm(String^username)
		{
			InitializeComponent();
			user = username;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~parentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ welcome_lb;
	private: System::Windows::Forms::Label^ display_lb;

	protected:

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
			this->welcome_lb = (gcnew System::Windows::Forms::Label());
			this->display_lb = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// welcome_lb
			// 
			this->welcome_lb->AutoSize = true;
			this->welcome_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome_lb->Location = System::Drawing::Point(19, 17);
			this->welcome_lb->Name = L"welcome_lb";
			this->welcome_lb->Size = System::Drawing::Size(350, 28);
			this->welcome_lb->TabIndex = 0;
			this->welcome_lb->Text = L"Hello,these is your kids records";
			this->welcome_lb->Click += gcnew System::EventHandler(this, &parentForm::label1_Click);
			// 
			// display_lb
			// 
			this->display_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display_lb->Location = System::Drawing::Point(16, 70);
			this->display_lb->Name = L"display_lb";
			this->display_lb->Size = System::Drawing::Size(721, 403);
			this->display_lb->TabIndex = 1;
			this->display_lb->Text = L"label1";
			this->display_lb->Click += gcnew System::EventHandler(this, &parentForm::display_lb_Click);
			// 
			// parentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 495);
			this->Controls->Add(this->display_lb);
			this->Controls->Add(this->welcome_lb);
			this->Name = L"parentForm";
			this->Text = L"parentForm";
			this->Load += gcnew System::EventHandler(this, &parentForm::parentForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void display_lb_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void parentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ read = File::OpenText("kidRec.txt");
		String^ lines;
		display_lb->Text = "";
		while ((lines = read->ReadLine()) != nullptr) {
			if (lines == user) {
				lines = read->ReadLine();
				display_lb->Text += lines;
				lines = read->ReadLine();
				display_lb->Text += lines;
				lines = read->ReadLine();
				display_lb->Text += lines;
				display_lb->Text += " ---------------------------------------------------------------------------------------- ";
			}
		}
		read->Close();
	}
	};
}
