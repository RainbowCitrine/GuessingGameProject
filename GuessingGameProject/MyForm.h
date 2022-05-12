#pragma once
#include <string>
#include <cstdlib>
#include <ctime>

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; 

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			srand(time(NULL));
			random = rand() % 10 + 1;
			 
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ mainTitle;
	private: System::Windows::Forms::Label^ userPrompt;
	private: System::Windows::Forms::TextBox^ Answer;

	protected:

	protected:


	private: System::Windows::Forms::Button^ submit;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ HotOrCold;
	private: System::Windows::Forms::Label^ CorrectOrIncorrect;
	private: System::Windows::Forms::Button^ Again;




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
			this->mainTitle = (gcnew System::Windows::Forms::Label());
			this->userPrompt = (gcnew System::Windows::Forms::Label());
			this->Answer = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->HotOrCold = (gcnew System::Windows::Forms::Label());
			this->CorrectOrIncorrect = (gcnew System::Windows::Forms::Label());
			this->Again = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mainTitle
			// 
			this->mainTitle->AutoSize = true;
			this->mainTitle->BackColor = System::Drawing::Color::Pink;
			this->mainTitle->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainTitle->Location = System::Drawing::Point(77, 45);
			this->mainTitle->Name = L"mainTitle";
			this->mainTitle->Size = System::Drawing::Size(945, 33);
			this->mainTitle->TabIndex = 0;
			this->mainTitle->Text = L"I have a number between 1 and 10 can you guess my number\?";
			// 
			// userPrompt
			// 
			this->userPrompt->AutoSize = true;
			this->userPrompt->BackColor = System::Drawing::Color::Lavender;
			this->userPrompt->Font = (gcnew System::Drawing::Font(L"Playbill", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userPrompt->Location = System::Drawing::Point(426, 106);
			this->userPrompt->Name = L"userPrompt";
			this->userPrompt->Size = System::Drawing::Size(269, 33);
			this->userPrompt->TabIndex = 1;
			this->userPrompt->Text = L"Please Enter your first guess";
			// 
			// Answer
			// 
			this->Answer->Location = System::Drawing::Point(484, 295);
			this->Answer->Name = L"Answer";
			this->Answer->Size = System::Drawing::Size(159, 20);
			this->Answer->TabIndex = 2;
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(484, 401);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(172, 152);
			this->submit->TabIndex = 3;
			this->submit->Text = L"Submit!";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &MyForm::submit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LavenderBlush;
			this->label3->Font = (gcnew System::Drawing::Font(L"Playbill", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 641);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Hint: Red = Warmer and Blue = Colder";
			// 
			// HotOrCold
			// 
			this->HotOrCold->AutoSize = true;
			this->HotOrCold->BackColor = System::Drawing::Color::Thistle;
			this->HotOrCold->Font = (gcnew System::Drawing::Font(L"Playbill", 15.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HotOrCold->Location = System::Drawing::Point(502, 252);
			this->HotOrCold->Name = L"HotOrCold";
			this->HotOrCold->Size = System::Drawing::Size(121, 21);
			this->HotOrCold->TabIndex = 5;
			this->HotOrCold->Text = L"Are You Hot Or Cold\?";
			// 
			// CorrectOrIncorrect
			// 
			this->CorrectOrIncorrect->AutoSize = true;
			this->CorrectOrIncorrect->Font = (gcnew System::Drawing::Font(L"Playbill", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CorrectOrIncorrect->Location = System::Drawing::Point(479, 352);
			this->CorrectOrIncorrect->Name = L"CorrectOrIncorrect";
			this->CorrectOrIncorrect->Size = System::Drawing::Size(50, 27);
			this->CorrectOrIncorrect->TabIndex = 6;
			this->CorrectOrIncorrect->Text = L"label5";
			this->CorrectOrIncorrect->Visible = false;
			// 
			// Again
			// 
			this->Again->Location = System::Drawing::Point(760, 252);
			this->Again->Name = L"Again";
			this->Again->Size = System::Drawing::Size(131, 100);
			this->Again->TabIndex = 7;
			this->Again->Text = L"Play Again\? ";
			this->Again->UseVisualStyleBackColor = true;
			this->Again->Visible = false;
			this->Again->Click += gcnew System::EventHandler(this, &MyForm::Again_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1099, 674);
			this->Controls->Add(this->Again);
			this->Controls->Add(this->CorrectOrIncorrect);
			this->Controls->Add(this->HotOrCold);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->Answer);
			this->Controls->Add(this->userPrompt);
			this->Controls->Add(this->mainTitle);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double guess = 0;
		double random;  
		double hint = (random - guess); 
		double nextGuess = 0; 
#pragma endregion
	private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		guess = Convert::ToDouble(this->Answer->Text);
		
		
			if (guess == random)
			{
				this->CorrectOrIncorrect->Visible = true;
				this->CorrectOrIncorrect->Text = L"Correct! Congratulations";
				this->Answer->ReadOnly = true; 
				this->Answer->BackColor = System::Drawing::Color::Green; 
				this->Again->Visible = true;
				this->HotOrCold->BackColor = System::Drawing::Color::Thistle;

			}
			else
			{
				this->CorrectOrIncorrect->Visible = true;
				this->CorrectOrIncorrect->Text = L"Sorry, that was incorrect please try again";
				nextGuess = Convert::ToDouble(this->Answer->Text);
			}
			
			if (nextGuess == random)
			{
				this->CorrectOrIncorrect->Visible = true;
				this->CorrectOrIncorrect->Text = L"Correct Congratulations!"; 
				this->Answer->ReadOnly = true;
				this->Answer->BackColor = System::Drawing::Color::Green;
				this->Again->Visible = true;
				this->HotOrCold->BackColor = System::Drawing::Color::Thistle;
			}
			else if (nextGuess - random < hint)
			{
				this->HotOrCold->BackColor = System::Drawing::Color::Red; 
			}
			else 
			{
				this->HotOrCold->BackColor = System::Drawing::Color::Blue; 
			}
			
	}
private: System::Void Again_Click(System::Object^ sender, System::EventArgs^ e) {
	this->CorrectOrIncorrect->Visible = false; 
	this->Answer->ReadOnly = false; 
	this->HotOrCold->BackColor = System::Drawing::Color::Thistle; 
	this->Answer->BackColor = System::Drawing::Color::White;
	random = rand() % 10 + 1;
}
};
}
