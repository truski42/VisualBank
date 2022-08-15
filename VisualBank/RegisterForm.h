#pragma once

#include "customers.h"
#include <string>
#include <cstdlib>
#include <ctime>

namespace VisualBank {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			srand((unsigned)time(NULL));
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbLast;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPass;
	private: System::Windows::Forms::TextBox^ tbPersonal;
	private: System::Windows::Forms::Button^ bOK;
	private: System::Windows::Forms::Button^ bCancel;
	private: System::Windows::Forms::TextBox^ tbConfirmPwd;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::LinkLabel^ llLogin;









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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbLast = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPass = (gcnew System::Windows::Forms::TextBox());
			this->tbPersonal = (gcnew System::Windows::Forms::TextBox());
			this->bOK = (gcnew System::Windows::Forms::Button());
			this->bCancel = (gcnew System::Windows::Forms::Button());
			this->tbConfirmPwd = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(614, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRATION";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First name";
			this->label2->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Last name";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 236);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Personal ID";
			this->label6->Click += gcnew System::EventHandler(this, &RegisterForm::label6_Click);
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(193, 117);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(392, 32);
			this->tbName->TabIndex = 6;
			// 
			// tbLast
			// 
			this->tbLast->Location = System::Drawing::Point(193, 155);
			this->tbLast->Name = L"tbLast";
			this->tbLast->Size = System::Drawing::Size(392, 32);
			this->tbLast->TabIndex = 7;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(193, 195);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(392, 32);
			this->tbEmail->TabIndex = 8;
			// 
			// tbPass
			// 
			this->tbPass->Location = System::Drawing::Point(193, 312);
			this->tbPass->Name = L"tbPass";
			this->tbPass->Size = System::Drawing::Size(392, 32);
			this->tbPass->TabIndex = 9;
			// 
			// tbPersonal
			// 
			this->tbPersonal->Location = System::Drawing::Point(193, 236);
			this->tbPersonal->Name = L"tbPersonal";
			this->tbPersonal->Size = System::Drawing::Size(392, 32);
			this->tbPersonal->TabIndex = 10;
			// 
			// bOK
			// 
			this->bOK->Location = System::Drawing::Point(193, 408);
			this->bOK->Name = L"bOK";
			this->bOK->Size = System::Drawing::Size(190, 41);
			this->bOK->TabIndex = 11;
			this->bOK->Text = L"OK";
			this->bOK->UseVisualStyleBackColor = true;
			this->bOK->Click += gcnew System::EventHandler(this, &RegisterForm::bOK_Click);
			// 
			// bCancel
			// 
			this->bCancel->Location = System::Drawing::Point(395, 408);
			this->bCancel->Name = L"bCancel";
			this->bCancel->Size = System::Drawing::Size(190, 41);
			this->bCancel->TabIndex = 12;
			this->bCancel->Text = L"Cancel";
			this->bCancel->UseVisualStyleBackColor = true;
			this->bCancel->Click += gcnew System::EventHandler(this, &RegisterForm::bCancel_Click);
			// 
			// tbConfirmPwd
			// 
			this->tbConfirmPwd->Location = System::Drawing::Point(193, 350);
			this->tbConfirmPwd->Name = L"tbConfirmPwd";
			this->tbConfirmPwd->Size = System::Drawing::Size(392, 32);
			this->tbConfirmPwd->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 353);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Confirm Password";
			this->label7->Click += gcnew System::EventHandler(this, &RegisterForm::label7_Click);
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(193, 274);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(392, 32);
			this->tbAddress->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 278);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Address";
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->LinkColor = System::Drawing::Color::Black;
			this->llLogin->Location = System::Drawing::Point(529, 452);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(56, 25);
			this->llLogin->TabIndex = 17;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(638, 486);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbConfirmPwd);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->bCancel);
			this->Controls->Add(this->bOK);
			this->Controls->Add(this->tbPersonal);
			this->Controls->Add(this->tbPass);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbLast);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

public: bool switchToLogin = false;

private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}

// Creating random account number 

public: String^ gen_random(const int len)
{
	static const char alphanum[] = "0123456789";
	String^ tmp_s;
	tmp_s->Length;
	for (int i = 0; i < len; ++i)
	{
		tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
	}
	return tmp_s;
}

public: 
	Random^ number = gcnew Random();
	int x = number->Next(10000, 999999999);
public: Customers^ customer = nullptr;

private: System::Void bOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstName = tbName->Text;
	String^ lastName = tbLast->Text;
	String^ email = tbEmail->Text;
	String^ address = tbAddress->Text;
	String^ personal = tbPersonal->Text;
	String^ password = tbPass->Text;
	String^ confirmPassword = tbConfirmPwd->Text;
	String^ accountNumber = x.ToString();
	// checking for empty fields
	if (firstName->Length == 0 || lastName->Length == 0
		|| email->Length == 0 || address->Length == 0
		|| personal->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please eneter all the fields",
			"On or more empty fields", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(password, confirmPassword) != 0) {
		MessageBox::Show("Password and Confirm Password do not match",
			"Password Error", MessageBoxButtons::OK);
		return;
	}

	// Connecting to database
	try {
		String^ connString = "Data Source=localhost\\mssqlserver01;Initial Catalog=banksystem;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO customers (firstName, lastName, email, password, address, personalID, accountNumber) VALUES "+
			"(@firstName, @lastName, @email, @password, @address, @personalID, @accountNumber); ";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@firstName", firstName);
		command.Parameters->AddWithValue("@lastName", lastName);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);
		command.Parameters->AddWithValue("@address", address);
		command.Parameters->AddWithValue("@personalID", personal);
		command.Parameters->AddWithValue("@accountNumber", accountNumber);


		command.ExecuteNonQuery();
		customer = gcnew Customers;
		customer->firstName = firstName;
		customer->lastName = lastName;
		customer->email = email;
		customer->password = password;
		customer->address = address;
		customer->personalID = personal;
		customer->accountNumber = accountNumber;

		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex +"Failed to register new user",
			"Register Failure", MessageBoxButtons::OK);
	}
}
};
}
