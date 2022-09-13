#pragma once

#include "Payments.h"
#include <sstream>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

namespace CustomPanels {

	/// <summary>
	/// Summary for OwnTransfer
	/// </summary>
	public ref class OwnTransfer : public System::Windows::Forms::UserControl
	{
	public:
		OwnTransfer()
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
		~OwnTransfer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbOwn;
	private: System::Windows::Forms::TextBox^ tbAccount;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbAmount;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ bntSubmit;
	private: System::Windows::Forms::Label^ label3;
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
			this->lbOwn = (gcnew System::Windows::Forms::Label());
			this->tbAccount = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bntSubmit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbOwn
			// 
			this->lbOwn->AutoSize = true;
			this->lbOwn->Location = System::Drawing::Point(144, 13);
			this->lbOwn->Name = L"lbOwn";
			this->lbOwn->Size = System::Drawing::Size(50, 23);
			this->lbOwn->TabIndex = 1;
			this->lbOwn->Text = L"Own";
			this->lbOwn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbAccount
			// 
			this->tbAccount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAccount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbAccount->Location = System::Drawing::Point(148, 51);
			this->tbAccount->Name = L"tbAccount";
			this->tbAccount->Size = System::Drawing::Size(163, 25);
			this->tbAccount->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(14, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"A/C";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbAmount
			// 
			this->tbAmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAmount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbAmount->Location = System::Drawing::Point(148, 96);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(163, 25);
			this->tbAmount->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(14, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Amount";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bntSubmit
			// 
			this->bntSubmit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bntSubmit->Location = System::Drawing::Point(148, 143);
			this->bntSubmit->Name = L"bntSubmit";
			this->bntSubmit->Size = System::Drawing::Size(163, 25);
			this->bntSubmit->TabIndex = 6;
			this->bntSubmit->Text = L"Submit";
			this->bntSubmit->UseVisualStyleBackColor = true;
			this->bntSubmit->Click += gcnew System::EventHandler(this, &OwnTransfer::bntSubmit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(148, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 23);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			// 
			// OwnTransfer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label3);
			this->Controls->Add(this->bntSubmit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbAccount);
			this->Controls->Add(this->lbOwn);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"OwnTransfer";
			this->Size = System::Drawing::Size(364, 213);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Payments^ payments = nullptr;
	private: System::Void bntSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		payments->interlocks;
		payments->interlocks->ToString();
	}
};
}
