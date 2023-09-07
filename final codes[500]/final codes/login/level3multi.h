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
	/// Summary for level3multi
	/// </summary>
	public ref class level3multi : public System::Windows::Forms::Form
	{
	public:
		level3multi(void)
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
		~level3multi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ firstNumb_lb;
	private: System::Windows::Forms::Label^ sign_lb;
	private: System::Windows::Forms::Label^ secondNumb_lb;
	private: System::Windows::Forms::Label^ equalSign_lb;
	private: System::Windows::Forms::TextBox^ ans_tb;
	private: System::Windows::Forms::Button^ quit_btn;
	private: System::Windows::Forms::Button^ next_btn;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ timer_lb;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->firstNumb_lb = (gcnew System::Windows::Forms::Label());
			this->sign_lb = (gcnew System::Windows::Forms::Label());
			this->secondNumb_lb = (gcnew System::Windows::Forms::Label());
			this->equalSign_lb = (gcnew System::Windows::Forms::Label());
			this->ans_tb = (gcnew System::Windows::Forms::TextBox());
			this->quit_btn = (gcnew System::Windows::Forms::Button());
			this->next_btn = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_lb = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// firstNumb_lb
			// 
			this->firstNumb_lb->AutoSize = true;
			this->firstNumb_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 20, System::Drawing::FontStyle::Bold));
			this->firstNumb_lb->Location = System::Drawing::Point(86, 131);
			this->firstNumb_lb->Name = L"firstNumb_lb";
			this->firstNumb_lb->Size = System::Drawing::Size(93, 34);
			this->firstNumb_lb->TabIndex = 10;
			this->firstNumb_lb->Text = L"label2";
			// 
			// sign_lb
			// 
			this->sign_lb->AutoSize = true;
			this->sign_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 20, System::Drawing::FontStyle::Bold));
			this->sign_lb->Location = System::Drawing::Point(242, 131);
			this->sign_lb->Name = L"sign_lb";
			this->sign_lb->Size = System::Drawing::Size(93, 34);
			this->sign_lb->TabIndex = 11;
			this->sign_lb->Text = L"label2";
			// 
			// secondNumb_lb
			// 
			this->secondNumb_lb->AutoSize = true;
			this->secondNumb_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 20, System::Drawing::FontStyle::Bold));
			this->secondNumb_lb->Location = System::Drawing::Point(382, 131);
			this->secondNumb_lb->Name = L"secondNumb_lb";
			this->secondNumb_lb->Size = System::Drawing::Size(93, 34);
			this->secondNumb_lb->TabIndex = 12;
			this->secondNumb_lb->Text = L"label2";
			// 
			// equalSign_lb
			// 
			this->equalSign_lb->AutoSize = true;
			this->equalSign_lb->Font = (gcnew System::Drawing::Font(L"MV Boli", 20, System::Drawing::FontStyle::Bold));
			this->equalSign_lb->Location = System::Drawing::Point(533, 131);
			this->equalSign_lb->Name = L"equalSign_lb";
			this->equalSign_lb->Size = System::Drawing::Size(93, 34);
			this->equalSign_lb->TabIndex = 13;
			this->equalSign_lb->Text = L"label2";
			// 
			// ans_tb
			// 
			this->ans_tb->Font = (gcnew System::Drawing::Font(L"MV Boli", 20, System::Drawing::FontStyle::Bold));
			this->ans_tb->Location = System::Drawing::Point(674, 115);
			this->ans_tb->Name = L"ans_tb";
			this->ans_tb->Size = System::Drawing::Size(87, 50);
			this->ans_tb->TabIndex = 14;
			// 
			// quit_btn
			// 
			this->quit_btn->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->quit_btn->Location = System::Drawing::Point(680, 12);
			this->quit_btn->Name = L"quit_btn";
			this->quit_btn->Size = System::Drawing::Size(81, 33);
			this->quit_btn->TabIndex = 15;
			this->quit_btn->Text = L"quit";
			this->quit_btn->UseVisualStyleBackColor = true;
			this->quit_btn->Click += gcnew System::EventHandler(this, &level3multi::quit_btn_Click);
			// 
			// next_btn
			// 
			this->next_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 15, System::Drawing::FontStyle::Bold));
			this->next_btn->Location = System::Drawing::Point(446, 250);
			this->next_btn->Name = L"next_btn";
			this->next_btn->Size = System::Drawing::Size(238, 58);
			this->next_btn->TabIndex = 16;
			this->next_btn->Text = L"check and  Next";
			this->next_btn->UseVisualStyleBackColor = true;
			this->next_btn->Click += gcnew System::EventHandler(this, &level3multi::next_btn_Click);
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 1500;
			this->timer->Tick += gcnew System::EventHandler(this, &level3multi::timer_Tick);
			// 
			// timer_lb
			// 
			this->timer_lb->AutoSize = true;
			this->timer_lb->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timer_lb->Location = System::Drawing::Point(349, 27);
			this->timer_lb->Name = L"timer_lb";
			this->timer_lb->Size = System::Drawing::Size(38, 18);
			this->timer_lb->TabIndex = 17;
			this->timer_lb->Text = L"0:0";
			// 
			// level3multi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 346);
			this->ControlBox = false;
			this->Controls->Add(this->timer_lb);
			this->Controls->Add(this->next_btn);
			this->Controls->Add(this->quit_btn);
			this->Controls->Add(this->ans_tb);
			this->Controls->Add(this->equalSign_lb);
			this->Controls->Add(this->secondNumb_lb);
			this->Controls->Add(this->sign_lb);
			this->Controls->Add(this->firstNumb_lb);
			this->Name = L"level3multi";
			this->Text = L"level3multi";
			this->Load += gcnew System::EventHandler(this, &level3multi::level3multi_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int an;
		int questC = 0;
		int correctC = 0;
		int second = 0;
		int minute = 0;
		String^ sec;
		String^ min;
	private: System::Void quit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ questionCount_correct = (questC - 1).ToString() + " questions was displayed to your kid ," + correctC.ToString() + " questions was answered correctly";
		String^ level = "level 3 multiplication questions ";
		String^ time;
		DateTime date = DateTime::Now;
		String^ datenow = " at day " + date.ToString();
		if (min == "0") {
			time = "In " + min + "  :" + sec + " seconds";
		}
		else if (min != "0") {
			time = "In " + min + " minute " + "and " + sec + " seconds";
		}

		StreamWriter^ writeFile = File::AppendText("kidRec.txt");
		writeFile->WriteLine(level);
		writeFile->WriteLine(questionCount_correct);
		writeFile->WriteLine(time + datenow);
		writeFile->Close();
		this->Hide();
	}
private: System::Void level3multi_Load(System::Object^ sender, System::EventArgs^ e) {
	questC++;
	Random^ nums = gcnew Random();
	int first = nums->Next(1, 12);
	firstNumb_lb->Text = first.ToString();
	//////////////////////////////
	Random^ numbs = gcnew Random();
	int second = numbs->Next(1, 12);
	while (first <= second) {
		second = numbs->Next(1, 12);
	}
	secondNumb_lb->Text = second.ToString();
	sign_lb->Text = "X";
	equalSign_lb->Text = "=";
	an = first * second;
}
private: System::Void next_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	bool check = false;
	String^ ans = an.ToString();
	if (ans == ans_tb->Text) {
		correctC++;
		MessageBox::Show("Your answer is correct ,great job");
		check = true;
	}
	else {
		MessageBox::Show("Oops!,your answer is wrong the correct anwer is " + ans);

	}

	if (check == true) {
		questC++;
		ans_tb->Text = "";
		Random^ nums = gcnew Random();
		int first = nums->Next(1, 12);
		firstNumb_lb->Text = first.ToString();
		//////////////////////////////
		Random^ numbs = gcnew Random();
		int second = numbs->Next(1, 12);
		while (first <= second) {
			second = numbs->Next(1, 12);
		}
		secondNumb_lb->Text = second.ToString();
		sign_lb->Text = "X";
		equalSign_lb->Text = "=";
		an = first * second;
	}
	else if (check == false) {
		questC++;
		ans_tb->Text = "";
		Random^ nums = gcnew Random();
		int first = nums->Next(1, 12);
		firstNumb_lb->Text = first.ToString();
		//////////////////////////////
		Random^ numbs = gcnew Random();
		int second = numbs->Next(1, 12);
		while (first <= second) {
			second = numbs->Next(1, 12);
		}
		secondNumb_lb->Text = second.ToString();
		sign_lb->Text = "X";
		equalSign_lb->Text = "=";
		an = first * second;
	}

}
private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	second++;
	if (second == 60) {
		second = 0;
		minute++;
	}
	sec = Convert::ToString(second);
	min = Convert::ToString(minute);
	timer_lb->Text = min + ":" + sec;

}
};
}
