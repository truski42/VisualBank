#pragma once
#include "customers.h"
namespace VisualBank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(Customers^ customer)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			lbUserInfo->Text = "ID=" + customer->id + ", Name=" + customer->firstName +
				", emial=" + customer->email + ", address=" + customer->address;
			lbUserInfo1->Text = "Account = " + customer->accountNumber;
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Label^ lbUserInfo1;


	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(614, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Account";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->Location = System::Drawing::Point(12, 86);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(614, 32);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			this->lbUserInfo->Click += gcnew System::EventHandler(this, &MainForm::lbUserInfo_Click);
			// 
			// lbUserInfo1
			// 
			this->lbUserInfo1->Location = System::Drawing::Point(12, 203);
			this->lbUserInfo1->Name = L"lbUserInfo1";
			this->lbUserInfo1->Size = System::Drawing::Size(614, 32);
			this->lbUserInfo1->TabIndex = 2;
			this->lbUserInfo1->Text = L"label2";
			this->lbUserInfo1->Click += gcnew System::EventHandler(this, &MainForm::lbUserInfo1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 438);
			this->Controls->Add(this->lbUserInfo1);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserInfo1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
