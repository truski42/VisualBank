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

	private: System::Windows::Forms::TextBox^ tbPersonal;
	private: System::Windows::Forms::Button^ bOK;
	private: System::Windows::Forms::Button^ bCancel;
	private: System::Windows::Forms::TextBox^ tbConfirmPwd;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label8;




	private: System::Windows::Forms::TextBox^ tbPass;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbLast = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPersonal = (gcnew System::Windows::Forms::TextBox());
			this->bOK = (gcnew System::Windows::Forms::Button());
			this->bCancel = (gcnew System::Windows::Forms::Button());
			this->tbConfirmPwd = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbPass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(453, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRATION";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(3, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First name";
			this->label2->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(3, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Last name";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(3, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(4, 260);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(3, 181);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Personal ID";
			this->label6->Click += gcnew System::EventHandler(this, &RegisterForm::label6_Click);
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::Window;
			this->tbName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbName->Location = System::Drawing::Point(184, 62);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(251, 25);
			this->tbName->TabIndex = 0;
			// 
			// tbLast
			// 
			this->tbLast->BackColor = System::Drawing::SystemColors::Window;
			this->tbLast->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbLast->Location = System::Drawing::Point(184, 100);
			this->tbLast->Name = L"tbLast";
			this->tbLast->Size = System::Drawing::Size(251, 25);
			this->tbLast->TabIndex = 1;
			// 
			// tbEmail
			// 
			this->tbEmail->BackColor = System::Drawing::SystemColors::Window;
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbEmail->Location = System::Drawing::Point(184, 140);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(251, 25);
			this->tbEmail->TabIndex = 2;
			// 
			// tbPersonal
			// 
			this->tbPersonal->BackColor = System::Drawing::SystemColors::Window;
			this->tbPersonal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPersonal->Location = System::Drawing::Point(184, 181);
			this->tbPersonal->Name = L"tbPersonal";
			this->tbPersonal->Size = System::Drawing::Size(251, 25);
			this->tbPersonal->TabIndex = 3;
			// 
			// bOK
			// 
			this->bOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->bOK->FlatAppearance->BorderSize = 0;
			this->bOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bOK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bOK->ForeColor = System::Drawing::Color::White;
			this->bOK->Location = System::Drawing::Point(184, 338);
			this->bOK->Name = L"bOK";
			this->bOK->Size = System::Drawing::Size(254, 28);
			this->bOK->TabIndex = 11;
			this->bOK->Text = L"REGISTER";
			this->bOK->UseVisualStyleBackColor = false;
			this->bOK->Click += gcnew System::EventHandler(this, &RegisterForm::bOK_Click);
			// 
			// bCancel
			// 
			this->bCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->bCancel->FlatAppearance->BorderSize = 0;
			this->bCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bCancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bCancel->ForeColor = System::Drawing::Color::White;
			this->bCancel->Location = System::Drawing::Point(12, 338);
			this->bCancel->Name = L"bCancel";
			this->bCancel->Size = System::Drawing::Size(121, 28);
			this->bCancel->TabIndex = 12;
			this->bCancel->Text = L"CLEAR";
			this->bCancel->UseVisualStyleBackColor = false;
			this->bCancel->Click += gcnew System::EventHandler(this, &RegisterForm::bCancel_Click);
			// 
			// tbConfirmPwd
			// 
			this->tbConfirmPwd->BackColor = System::Drawing::SystemColors::Window;
			this->tbConfirmPwd->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbConfirmPwd->Location = System::Drawing::Point(184, 298);
			this->tbConfirmPwd->Name = L"tbConfirmPwd";
			this->tbConfirmPwd->PasswordChar = '*';
			this->tbConfirmPwd->Size = System::Drawing::Size(254, 25);
			this->tbConfirmPwd->TabIndex = 6;
			this->tbConfirmPwd->TextChanged += gcnew System::EventHandler(this, &RegisterForm::tbConfirmPwd_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(3, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 19);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Confirm Password";
			this->label7->Click += gcnew System::EventHandler(this, &RegisterForm::label7_Click);
			// 
			// tbAddress
			// 
			this->tbAddress->BackColor = System::Drawing::SystemColors::Window;
			this->tbAddress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAddress->Location = System::Drawing::Point(184, 219);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(251, 25);
			this->tbAddress->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(3, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 19);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Address";
			// 
			// tbPass
			// 
			this->tbPass->BackColor = System::Drawing::SystemColors::Window;
			this->tbPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPass->Location = System::Drawing::Point(184, 257);
			this->tbPass->Name = L"tbPass";
			this->tbPass->PasswordChar = '*';
			this->tbPass->Size = System::Drawing::Size(251, 25);
			this->tbPass->TabIndex = 5;
			this->tbPass->TextChanged += gcnew System::EventHandler(this, &RegisterForm::tbPass_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(396, 258);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 25);
			this->button1->TabIndex = 18;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(396, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 25);
			this->button2->TabIndex = 19;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::Color::DimGray;
			this->label9->Location = System::Drawing::Point(279, 381);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 23);
			this->label9->TabIndex = 27;
			this->label9->Text = L"LOGIN";
			this->label9->Click += gcnew System::EventHandler(this, &RegisterForm::label9_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(477, 413);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
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
	tbName->Text = "";
	tbLast->Text = "";
	tbAddress->Text = "";
	tbConfirmPwd->Text = "";
	tbEmail->Text = "";
	tbPass->Text = "";
	tbPersonal->Text = "";
	tbName->Focus();
}

public: bool switchToLogin = false;


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
	// Password validation
	if (String::Compare(password, confirmPassword) != 0) {
		MessageBox::Show("Password and Confirm Password do not match",
			"Password Error", MessageBoxButtons::OK);
		return;
	}

	try {

		// Attempt to connect to a database

		String^ connString = "Data Source=localhost\\mssqlserver01;Initial Catalog=banksystem;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Creating a database query

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
		
		// Assigning values in the database using a label

		command.ExecuteNonQuery();
		customer = gcnew Customers;
		customer->firstName = firstName;
		customer->lastName = lastName;
		customer->email = email;
		customer->password = password;
		customer->address = address;
		customer->personalID = personal;
		customer->accountNumber = accountNumber;
		
		MessageBox::Show("This is your account number, please remember it, you will need it to log in: " + accountNumber);
		sqlConn.Close();
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex +"Failed to register new user",
			"Register Failure", MessageBoxButtons::OK);
	}
}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void tbPass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbConfirmPwd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbPass->PasswordChar == '*' || tbConfirmPwd->PasswordChar == '*') {
		button1->BringToFront();
		tbPass->PasswordChar = '\0';
		tbConfirmPwd->PasswordChar = '\0';
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (tbPass->PasswordChar == '\0' || tbConfirmPwd->PasswordChar == '\0') {
		button2->BringToFront();
		tbPass->PasswordChar = '*';
		tbConfirmPwd->PasswordChar = '*';
	}
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
};
}
