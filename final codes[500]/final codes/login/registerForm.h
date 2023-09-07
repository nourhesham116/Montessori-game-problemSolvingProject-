#pragma once

namespace login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for registerForm
	/// </summary>
	public ref class registerForm : public System::Windows::Forms::Form
	{
	public:
		registerForm(void)
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
		~registerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ creatAcc_btn;
	protected:
	private: System::Windows::Forms::TextBox^ enterPass_tb;
	private: System::Windows::Forms::TextBox^ enterUser_tb;
	private: System::Windows::Forms::Label^ enterUser_lb;
	private: System::Windows::Forms::Label^ enterPass_lb;
	private: System::Windows::Forms::Label^ parentORchild_lb;
	private: System::Windows::Forms::TextBox^ parentORchild_tb;
	private: System::Windows::Forms::Label^ parentEnterkid_lb;
	private: System::Windows::Forms::TextBox^ parentEnterkid_tb;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registerForm::typeid));
			this->creatAcc_btn = (gcnew System::Windows::Forms::Button());
			this->enterPass_tb = (gcnew System::Windows::Forms::TextBox());
			this->enterUser_tb = (gcnew System::Windows::Forms::TextBox());
			this->enterUser_lb = (gcnew System::Windows::Forms::Label());
			this->enterPass_lb = (gcnew System::Windows::Forms::Label());
			this->parentORchild_lb = (gcnew System::Windows::Forms::Label());
			this->parentORchild_tb = (gcnew System::Windows::Forms::TextBox());
			this->parentEnterkid_lb = (gcnew System::Windows::Forms::Label());
			this->parentEnterkid_tb = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// creatAcc_btn
			// 
			this->creatAcc_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creatAcc_btn->Location = System::Drawing::Point(122, 412);
			this->creatAcc_btn->Name = L"creatAcc_btn";
			this->creatAcc_btn->Size = System::Drawing::Size(154, 36);
			this->creatAcc_btn->TabIndex = 1;
			this->creatAcc_btn->Text = L"creat an account";
			this->creatAcc_btn->UseVisualStyleBackColor = true;
			this->creatAcc_btn->Click += gcnew System::EventHandler(this, &registerForm::creatAcc_btn_Click);
			// 
			// enterPass_tb
			// 
			this->enterPass_tb->Location = System::Drawing::Point(26, 183);
			this->enterPass_tb->Name = L"enterPass_tb";
			this->enterPass_tb->Size = System::Drawing::Size(156, 20);
			this->enterPass_tb->TabIndex = 2;
			// 
			// enterUser_tb
			// 
			this->enterUser_tb->Location = System::Drawing::Point(26, 96);
			this->enterUser_tb->Name = L"enterUser_tb";
			this->enterUser_tb->Size = System::Drawing::Size(156, 20);
			this->enterUser_tb->TabIndex = 3;
			this->enterUser_tb->TextChanged += gcnew System::EventHandler(this, &registerForm::enterUser_tb_TextChanged);
			// 
			// enterUser_lb
			// 
			this->enterUser_lb->AutoSize = true;
			this->enterUser_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->enterUser_lb->Location = System::Drawing::Point(21, 38);
			this->enterUser_lb->Name = L"enterUser_lb";
			this->enterUser_lb->Size = System::Drawing::Size(218, 25);
			this->enterUser_lb->TabIndex = 4;
			this->enterUser_lb->Text = L"Enter your username";
			this->enterUser_lb->Click += gcnew System::EventHandler(this, &registerForm::enterUser_lb_Click);
			// 
			// enterPass_lb
			// 
			this->enterPass_lb->AutoSize = true;
			this->enterPass_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 14, System::Drawing::FontStyle::Bold));
			this->enterPass_lb->Location = System::Drawing::Point(21, 139);
			this->enterPass_lb->Name = L"enterPass_lb";
			this->enterPass_lb->Size = System::Drawing::Size(215, 25);
			this->enterPass_lb->TabIndex = 5;
			this->enterPass_lb->Text = L"Enter your password";
			// 
			// parentORchild_lb
			// 
			this->parentORchild_lb->AutoSize = true;
			this->parentORchild_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold));
			this->parentORchild_lb->Location = System::Drawing::Point(22, 236);
			this->parentORchild_lb->Name = L"parentORchild_lb";
			this->parentORchild_lb->Size = System::Drawing::Size(291, 21);
			this->parentORchild_lb->TabIndex = 6;
			this->parentORchild_lb->Text = L"please enter (parent) or (child)";
			// 
			// parentORchild_tb
			// 
			this->parentORchild_tb->Location = System::Drawing::Point(26, 284);
			this->parentORchild_tb->Name = L"parentORchild_tb";
			this->parentORchild_tb->Size = System::Drawing::Size(156, 20);
			this->parentORchild_tb->TabIndex = 7;
			this->parentORchild_tb->TextChanged += gcnew System::EventHandler(this, &registerForm::parentORchild_tb_TextChanged);
			// 
			// parentEnterkid_lb
			// 
			this->parentEnterkid_lb->AutoSize = true;
			this->parentEnterkid_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold));
			this->parentEnterkid_lb->Location = System::Drawing::Point(22, 320);
			this->parentEnterkid_lb->Name = L"parentEnterkid_lb";
			this->parentEnterkid_lb->Size = System::Drawing::Size(408, 21);
			this->parentEnterkid_lb->TabIndex = 8;
			this->parentEnterkid_lb->Text = L"if you are a parent enter your kid\'s username";
			// 
			// parentEnterkid_tb
			// 
			this->parentEnterkid_tb->Location = System::Drawing::Point(25, 363);
			this->parentEnterkid_tb->Name = L"parentEnterkid_tb";
			this->parentEnterkid_tb->Size = System::Drawing::Size(157, 20);
			this->parentEnterkid_tb->TabIndex = 9;
			// 
			// registerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(443, 460);
			this->Controls->Add(this->parentEnterkid_tb);
			this->Controls->Add(this->parentEnterkid_lb);
			this->Controls->Add(this->parentORchild_tb);
			this->Controls->Add(this->parentORchild_lb);
			this->Controls->Add(this->enterPass_lb);
			this->Controls->Add(this->enterUser_lb);
			this->Controls->Add(this->enterUser_tb);
			this->Controls->Add(this->enterPass_tb);
			this->Controls->Add(this->creatAcc_btn);
			this->Name = L"registerForm";
			this->Text = L"registerForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backToLogin_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void creatAcc_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = enterUser_tb->Text;
		String^ password = enterPass_tb->Text;
		String^ parentORchild;
		String^ parentEnterkid=parentEnterkid_tb->Text;
		bool check = false;
		StreamReader^ read = File::OpenText("info.txt");
		String^ lines;
		while ((lines = read->ReadLine()) != nullptr) {
			if (lines == username) {
				enterUser_tb->Text = "";
				username = "";
				MessageBox::Show("The username you entered is already taken please enter another one ");
				
			}
		}read->Close();

		if (parentORchild_tb->Text == "parent" || parentORchild_tb->Text == "child") {
			check = true;
			parentORchild = parentORchild_tb->Text;
		}
		 if (!check) {
			MessageBox::Show("the answer you provided is not an option try again");

			parentORchild_tb->Text = "";
			parentORchild = "";


		}
		if (parentORchild_tb->Text == "parent" && parentEnterkid_tb->Text == "") {
			MessageBox::Show("please enter your child's username");

		}
		if (parentORchild_tb->Text == "parent" && parentEnterkid_tb->Text != "") {
			parentEnterkid_tb->Text == "";

		}

		 if (parentORchild_tb->Text == "parent") {
			 if (parentORchild != "" && username != "" && password != ""&& parentEnterkid_tb->Text != "") {
				 StreamWriter^ writeFile = File::AppendText("info.txt");
				 writeFile->WriteLine(username);
				 writeFile->WriteLine(password);
				 writeFile->WriteLine(parentORchild);
				 writeFile->WriteLine(parentEnterkid);
				 writeFile->Close();
				 MessageBox::Show("account created succsesfully");
			 }
		}
		 else if (parentORchild_tb->Text == "child") {
			 if (parentORchild != "" && username != "" && password != "" && parentEnterkid_tb->Text == "") {
				 StreamWriter^ writeFile = File::AppendText("info.txt");
				 writeFile->WriteLine(username);
				 writeFile->WriteLine(password);
				 writeFile->WriteLine(parentORchild);
				 writeFile->Close();
				 MessageBox::Show("account created succsesfully");
			 }

		 }

	}
private: System::Void parentORchild_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void enterUser_lb_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void enterUser_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}
};
}
