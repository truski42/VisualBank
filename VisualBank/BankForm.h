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
	/// Summary for BankForm
	/// </summary>
	public ref class BankForm : public System::Windows::Forms::Form
	{
	public:
		BankForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BankForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnHide;
	private: System::Windows::Forms::Button^ btnVisible;

	private: System::Windows::Forms::Button^ okButton;
	private: System::Windows::Forms::TextBox^ tbAccount;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ EXIT;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BankForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnHide = (gcnew System::Windows::Forms::Button());
			this->btnVisible = (gcnew System::Windows::Forms::Button());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->tbAccount = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->EXIT = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(88, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"BANK SYSTEM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnHide
			// 
			this->btnHide->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnHide->FlatAppearance->BorderSize = 0;
			this->btnHide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHide->ForeColor = System::Drawing::Color::White;
			this->btnHide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHide.Image")));
			this->btnHide->Location = System::Drawing::Point(204, 149);
			this->btnHide->Name = L"btnHide";
			this->btnHide->Size = System::Drawing::Size(38, 24);
			this->btnHide->TabIndex = 19;
			this->btnHide->UseVisualStyleBackColor = false;
			this->btnHide->Click += gcnew System::EventHandler(this, &BankForm::btnHide_Click);
			// 
			// btnVisible
			// 
			this->btnVisible->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnVisible->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnVisible->FlatAppearance->BorderSize = 0;
			this->btnVisible->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVisible->ForeColor = System::Drawing::Color::White;
			this->btnVisible->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnVisible.Image")));
			this->btnVisible->Location = System::Drawing::Point(204, 149);
			this->btnVisible->Name = L"btnVisible";
			this->btnVisible->Size = System::Drawing::Size(38, 25);
			this->btnVisible->TabIndex = 20;
			this->btnVisible->UseVisualStyleBackColor = false;
			this->btnVisible->Click += gcnew System::EventHandler(this, &BankForm::btnVisible_Click);
			// 
			// okButton
			// 
			this->okButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->okButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->okButton->FlatAppearance->BorderSize = 0;
			this->okButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->okButton->ForeColor = System::Drawing::Color::White;
			this->okButton->Location = System::Drawing::Point(77, 198);
			this->okButton->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(165, 28);
			this->okButton->TabIndex = 2;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = false;
			this->okButton->Click += gcnew System::EventHandler(this, &BankForm::okButton_Click);
			// 
			// tbAccount
			// 
			this->tbAccount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAccount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbAccount->Location = System::Drawing::Point(77, 84);
			this->tbAccount->Name = L"tbAccount";
			this->tbAccount->Size = System::Drawing::Size(165, 22);
			this->tbAccount->TabIndex = 0;
			this->tbAccount->TextChanged += gcnew System::EventHandler(this, &BankForm::tbAccount_TextChanged);
			// 
			// tbPassword
			// 
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPassword->Location = System::Drawing::Point(77, 149);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(165, 22);
			this->tbPassword->TabIndex = 1;
			// 
			// EXIT
			// 
			this->EXIT->AutoSize = true;
			this->EXIT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->EXIT->ForeColor = System::Drawing::Color::DimGray;
			this->EXIT->Location = System::Drawing::Point(12, 274);
			this->EXIT->Name = L"EXIT";
			this->EXIT->Size = System::Drawing::Size(55, 23);
			this->EXIT->TabIndex = 5;
			this->EXIT->Text = L"EXIT";
			this->EXIT->Click += gcnew System::EventHandler(this, &BankForm::EXIT_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::DimGray;
			this->label2->Location = System::Drawing::Point(207, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"SIGN UP";
			this->label2->Click += gcnew System::EventHandler(this, &BankForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::DimGray;
			this->label3->Location = System::Drawing::Point(85, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"FORGET PASSWORD";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(74, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 15);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Account number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(74, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 15);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Password";
			// 
			// BankForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(308, 311);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->EXIT);
			this->Controls->Add(this->tbAccount);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->btnVisible);
			this->Controls->Add(this->btnHide);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbPassword);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"BankForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BankForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Customers^ customer = nullptr;

	public: bool switchToRegister = false;
	private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ accountNumber = this->tbAccount->Text;
		String^ password = this->tbPassword->Text;

		// checking for empty fields
		if (accountNumber->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please eneter email and password",
				"Email or Password Empty", MessageBoxButtons::OK);
			return;
		}
		try {
			// Attempt to connect to a database

			String^ connString = "Data Source=localhost\\mssqlserver01;Initial Catalog=banksystem;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			// Creating a database query

			String^ sqlQuery = "SELECT * FROM customers WHERE accountNumber=@accountNumber AND password=@password;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@accountNumber", accountNumber);
			command.Parameters->AddWithValue("@password", password);

			// Reading columns from the database
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
				customer->availableBalance = reader->GetDecimal(8);
				customer->soldo = reader->GetDecimal(9);
				customer->interlocks = reader->GetDecimal(10);
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
private: System::Void registerLabel_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
private: System::Void btnHide_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbPassword->PasswordChar == '\0') {
		btnVisible->BringToFront();
		tbPassword->PasswordChar = '*';
	}
}
private: System::Void btnVisible_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbPassword->PasswordChar == '*'){
		btnHide->BringToFront();
		tbPassword->PasswordChar = '\0';
	}
}
private: System::Void EXIT_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbAccount_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
