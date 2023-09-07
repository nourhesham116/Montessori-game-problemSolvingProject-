#pragma once
#include"level1add.h"
#include"level2sub.h"
#include"level3multi.h"
namespace login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for levelsForm
	/// </summary>
	public ref class levelsForm : public System::Windows::Forms::Form
	{
	public:
		levelsForm(void)
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
		~levelsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ level1_btn;
	protected:
	private: System::Windows::Forms::Button^ level2_btn;
	private: System::Windows::Forms::Button^ level3_btn;

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
			this->level1_btn = (gcnew System::Windows::Forms::Button());
			this->level2_btn = (gcnew System::Windows::Forms::Button());
			this->level3_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// level1_btn
			// 
			this->level1_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->level1_btn->Location = System::Drawing::Point(188, 35);
			this->level1_btn->Name = L"level1_btn";
			this->level1_btn->Size = System::Drawing::Size(260, 71);
			this->level1_btn->TabIndex = 0;
			this->level1_btn->Text = L"Level 1";
			this->level1_btn->UseVisualStyleBackColor = true;
			this->level1_btn->Click += gcnew System::EventHandler(this, &levelsForm::level1_btn_Click);
			// 
			// level2_btn
			// 
			this->level2_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold));
			this->level2_btn->Location = System::Drawing::Point(188, 136);
			this->level2_btn->Name = L"level2_btn";
			this->level2_btn->Size = System::Drawing::Size(259, 69);
			this->level2_btn->TabIndex = 1;
			this->level2_btn->Text = L"Level 2";
			this->level2_btn->UseVisualStyleBackColor = true;
			this->level2_btn->Click += gcnew System::EventHandler(this, &levelsForm::level2_btn_Click);
			// 
			// level3_btn
			// 
			this->level3_btn->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, System::Drawing::FontStyle::Bold));
			this->level3_btn->Location = System::Drawing::Point(188, 240);
			this->level3_btn->Name = L"level3_btn";
			this->level3_btn->Size = System::Drawing::Size(259, 66);
			this->level3_btn->TabIndex = 2;
			this->level3_btn->Text = L"Level 3";
			this->level3_btn->UseVisualStyleBackColor = true;
			this->level3_btn->Click += gcnew System::EventHandler(this, &levelsForm::level3_btn_Click);
			// 
			// levelsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::ForestGreen;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(689, 338);
			this->Controls->Add(this->level3_btn);
			this->Controls->Add(this->level2_btn);
			this->Controls->Add(this->level1_btn);
			this->Name = L"levelsForm";
			this->Text = L"levelsForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void level1_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		level1add^ f1 = gcnew level1add();
		f1->Show();
	}
	private: System::Void level2_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		level2sub^ f1 = gcnew level2sub();
		f1->Show();
	}
	private: System::Void level3_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		level3multi^ f1 = gcnew level3multi();
		f1->Show();
	}
};
}
