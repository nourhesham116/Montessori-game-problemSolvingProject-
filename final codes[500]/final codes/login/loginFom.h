#pragma once
#include"registerForm.h"
#include"levelsForm.h"
#include"parentForm.h"
namespace login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loginFom
	/// </summary>
	public ref class loginFom : public System::Windows::Forms::Form
	{
	public:
		loginFom(void)
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
		~loginFom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ signIn_lb;
	protected:
	private: System::Windows::Forms::Label^ username_lb;
	private: System::Windows::Forms::Label^ password_lb;
	private: System::Windows::Forms::TextBox^ username_tb;
	private: System::Windows::Forms::TextBox^ password_tb;
	private: System::Windows::Forms::Button^ signIn_btn;
	private: System::Windows::Forms::Button^ register_btn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginFom::typeid));
			this->signIn_lb = (gcnew System::Windows::Forms::Label());
			this->username_lb = (gcnew System::Windows::Forms::Label());
			this->password_lb = (gcnew System::Windows::Forms::Label());
			this->username_tb = (gcnew System::Windows::Forms::TextBox());
			this->password_tb = (gcnew System::Windows::Forms::TextBox());
			this->signIn_btn = (gcnew System::Windows::Forms::Button());
			this->register_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// signIn_lb
			// 
			this->signIn_lb->AutoSize = true;
			this->signIn_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signIn_lb->Location = System::Drawing::Point(194, 19);
			this->signIn_lb->Name = L"signIn_lb";
			this->signIn_lb->Size = System::Drawing::Size(116, 39);
			this->signIn_lb->TabIndex = 0;
			this->signIn_lb->Text = L"Sign in";
			// 
			// username_lb
			// 
			this->username_lb->AutoSize = true;
			this->username_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_lb->Location = System::Drawing::Point(21, 86);
			this->username_lb->Name = L"username_lb";
			this->username_lb->Size = System::Drawing::Size(125, 31);
			this->username_lb->TabIndex = 1;
			this->username_lb->Text = L"username";
			// 
			// password_lb
			// 
			this->password_lb->AutoSize = true;
			this->password_lb->BackColor = System::Drawing::SystemColors::Control;
			this->password_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_lb->Location = System::Drawing::Point(21, 206);
			this->password_lb->Name = L"password_lb";
			this->password_lb->Size = System::Drawing::Size(122, 31);
			this->password_lb->TabIndex = 2;
			this->password_lb->Text = L"password";
			// 
			// username_tb
			// 
			this->username_tb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->username_tb->Location = System::Drawing::Point(27, 139);
			this->username_tb->Name = L"username_tb";
			this->username_tb->Size = System::Drawing::Size(256, 20);
			this->username_tb->TabIndex = 3;
			// 
			// password_tb
			// 
			this->password_tb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->password_tb->Location = System::Drawing::Point(27, 270);
			this->password_tb->Name = L"password_tb";
			this->password_tb->Size = System::Drawing::Size(256, 20);
			this->password_tb->TabIndex = 4;
			// 
			// signIn_btn
			// 
			this->signIn_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signIn_btn->Location = System::Drawing::Point(47, 372);
			this->signIn_btn->Name = L"signIn_btn";
			this->signIn_btn->Size = System::Drawing::Size(163, 42);
			this->signIn_btn->TabIndex = 5;
			this->signIn_btn->Text = L"sign in";
			this->signIn_btn->UseVisualStyleBackColor = true;
			this->signIn_btn->Click += gcnew System::EventHandler(this, &loginFom::signIn_btn_Click);
			// 
			// register_btn
			// 
			this->register_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->register_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_btn->Location = System::Drawing::Point(290, 372);
			this->register_btn->Name = L"register_btn";
			this->register_btn->Size = System::Drawing::Size(173, 42);
			this->register_btn->TabIndex = 6;
			this->register_btn->Text = L"register";
			this->register_btn->UseVisualStyleBackColor = true;
			this->register_btn->Click += gcnew System::EventHandler(this, &loginFom::register_btn_Click);
			// 
			// loginFom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(560, 456);
			this->Controls->Add(this->register_btn);
			this->Controls->Add(this->signIn_btn);
			this->Controls->Add(this->password_tb);
			this->Controls->Add(this->username_tb);
			this->Controls->Add(this->password_lb);
			this->Controls->Add(this->username_lb);
			this->Controls->Add(this->signIn_lb);
			this->Name = L"loginFom";
			this->Text = L"loginFom";
			this->Load += gcnew System::EventHandler(this, &loginFom::loginFom_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginFom_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void register_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		registerForm^ f1 = gcnew registerForm();
		f1->Show();

	}
	private: System::Void signIn_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = username_tb->Text;
		String^ password = password_tb->Text;
		StreamReader^ readfile = gcnew StreamReader("info.txt");//File::OpenText("info.txt")
		String^ line;
		bool checkuser = false;
		bool checkpass = false;
		while ((line = readfile->ReadLine()) != nullptr) {
			if (line == username) {
				checkuser = true;
				line = readfile->ReadLine();
				if (line == password) {
					MessageBox::Show("correct username and password");
					checkpass = true;
				line = readfile->ReadLine();
				if (line == "child" && username_tb->Text != ""&& password_tb->Text != "") {
					StreamWriter^ writeFile = File::AppendText("kidRec.txt");
					writeFile->WriteLine(username);      //3shan a save esm tefl abl record;
					writeFile->Close();
					levelsForm^ f1 = gcnew levelsForm();
					f1->Show();//open game form
				}
				else if (line == "parent" && username_tb->Text != "" && password_tb->Text != "") {
					line = readfile->ReadLine();
					parentForm^ use = gcnew parentForm(line);
					use->Show();//open records
				}
			}
		}
		}
		if (checkuser == false) {
			MessageBox::Show("the username you entered is not found");
			username_tb->Text = "";
			password_tb->Text = "";
		}
		if (checkpass == false) {
			MessageBox::Show("the password you entered is not correct");
			username_tb->Text = "";
			password_tb->Text = "";
		}

	}

	};
}
