#pragma once

#include "customers.h"
namespace VisualBank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o BankForm
	/// </summary>
	public ref class BankForm : public System::Windows::Forms::Form
	{
	public:
		BankForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~BankForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ quitButton;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Label^ loginText;
	private: System::Windows::Forms::Label^ passLabel;
	private: System::Windows::Forms::TextBox^ tbAccount;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::LinkLabel^ llRegister;



	private: System::Windows::Forms::Button^ okButton;




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
			this->quitButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginText = (gcnew System::Windows::Forms::Label());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->tbAccount = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// quitButton
			// 
			this->quitButton->Location = System::Drawing::Point(525, 338);
			this->quitButton->Name = L"quitButton";
			this->quitButton->Size = System::Drawing::Size(101, 54);
			this->quitButton->TabIndex = 1;
			this->quitButton->Text = L"Exit";
			this->quitButton->UseVisualStyleBackColor = true;
			this->quitButton->Click += gcnew System::EventHandler(this, &BankForm::quitButton_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(614, 43);
			this->label1->TabIndex = 2;
			this->label1->Text = L"BANK SYSTEM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// loginText
			// 
			this->loginText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->loginText->Location = System::Drawing::Point(73, 152);
			this->loginText->Name = L"loginText";
			this->loginText->Size = System::Drawing::Size(189, 33);
			this->loginText->TabIndex = 6;
			this->loginText->Text = L"Account number";
			this->loginText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->loginText->Click += gcnew System::EventHandler(this, &BankForm::loginText_Click);
			// 
			// passLabel
			// 
			this->passLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->passLabel->Location = System::Drawing::Point(73, 206);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(189, 33);
			this->passLabel->TabIndex = 7;
			this->passLabel->Text = L"Password";
			this->passLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbAccount
			// 
			this->tbAccount->Location = System::Drawing::Point(268, 152);
			this->tbAccount->Name = L"tbAccount";
			this->tbAccount->Size = System::Drawing::Size(227, 32);
			this->tbAccount->TabIndex = 8;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(268, 206);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(227, 32);
			this->tbPassword->TabIndex = 9;
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->LinkColor = System::Drawing::Color::Black;
			this->llRegister->Location = System::Drawing::Point(520, 404);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(72, 25);
			this->llRegister->TabIndex = 10;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Sign up";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &BankForm::registerLabel_LinkClicked);
			// 
			// okButton
			// 
			this->okButton->AutoSize = true;
			this->okButton->Location = System::Drawing::Point(437, 338);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(82, 54);
			this->okButton->TabIndex = 11;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &BankForm::okButton_Click);
			// 
			// BankForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(638, 438);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAccount);
			this->Controls->Add(this->passLabel);
			this->Controls->Add(this->loginText);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->quitButton);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"BankForm";
			this->Text = L"BankForm";
			this->Load += gcnew System::EventHandler(this, &BankForm::BankForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void quitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult iExit;
		iExit = MessageBox::Show("Confirm if you want exit", "ATM SYSTEM", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iExit == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
private: System::Void loginText_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
public: Customers^ customer = nullptr;

private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbAccount->Text;
	String^ password = this->tbPassword->Text;

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please eneter email and password",
			"Email or Password Empty", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=localhost\\mssqlserver01;Initial Catalog=banksystem;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM customers WHERE email=@email AND password=@password;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);


		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read()) {
			customer = gcnew Customers;
			customer->id = reader->GetInt32(0);
			customer->firstName = reader->GetString(1);
			customer->lastName = reader->GetString(2);
			customer->email = reader->GetString(3);
			customer->password = reader->GetString(4);
			customer->address = reader->GetString(5);
			customer->personalID = reader->GetString(6);
			customer->accountNumber = reader->GetString(7);
			this->Close();
		}
		else {
			MessageBox::Show("Email or password is incorrect",
				"Email or Password Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
		}
}

public: bool switchToRegister = false;

private: System::Void registerLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
private: System::Void BankForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->CenterToScreen();
}
};
}
