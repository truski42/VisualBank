#pragma once
#include <iostream>
#include "customers.h"
#include "PaymentForm.h"
#include <string>
namespace VisualBank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

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
			int balance = System::Convert::ToInt32(customer->soldo);
			label1->Text = customer->firstName + " " + customer->lastName;
			lbAccountInfo->Text = "A/C " + customer->accountNumber;
			lbBalance->Text = customer->availableBalance->ToString() + " PLN";
			if (customer->soldo == nullptr) {
				lbSoldo->Text = "0,00 PLN";
			}
			else {
				lbSoldo->Text = customer->soldo + " PLN";
			}
			if (customer->interlocks == nullptr) {
				lbInterlocks->Text = "0,00 PLN";
			}
			else {
				lbInterlocks->Text = "-" + customer->interlocks->ToString() + " PLN";
			}
			this->CenterToScreen();
			pnlTransfer->Hide();
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




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ plBalance;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbBalance;
	private: System::Windows::Forms::Button^ btStart;

	private: System::Windows::Forms::Label^ lbDate;
	private: System::Windows::Forms::Button^ btOffer;



	private: System::Windows::Forms::Button^ btPayments;

	private: System::Windows::Forms::Label^ lbTime;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lbAccountInfo;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbSoldo;
	private: System::Windows::Forms::Label^ lbInterlocks;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PageSetupDialog^ pageSetupDialog1;
	private: System::Windows::Forms::Panel^ pnlTransfer;
	private: System::Windows::Forms::Panel^ pnlNavigationTransfer;
	private: System::Windows::Forms::Button^ btnNational;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btnOwn;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ pnlOwnTransfer;
	private: System::Windows::Forms::Label^ lbTransfer;

	private: System::Windows::Forms::Label^ lbOwn;
	private: System::Windows::Forms::Button^ bntSubmit;
	private: System::Windows::Forms::TextBox^ tbAccount;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Panel^ pnlNationalTransfer;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ pnlFXTransfer;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ pnlTaxTransfer;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ tbAmount;
	private: System::Windows::Forms::Button^ bntClearOwn;


















	private: System::ComponentModel::IContainer^ components;





	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->btOffer = (gcnew System::Windows::Forms::Button());
			this->btPayments = (gcnew System::Windows::Forms::Button());
			this->btStart = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lbAccountInfo = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->plBalance = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbInterlocks = (gcnew System::Windows::Forms::Label());
			this->lbSoldo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbBalance = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->pnlTransfer = (gcnew System::Windows::Forms::Panel());
			this->pnlNavigationTransfer = (gcnew System::Windows::Forms::Panel());
			this->btnNational = (gcnew System::Windows::Forms::Button());
			this->btnOwn = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pnlOwnTransfer = (gcnew System::Windows::Forms::Panel());
			this->tbAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbTransfer = (gcnew System::Windows::Forms::Label());
			this->lbOwn = (gcnew System::Windows::Forms::Label());
			this->bntSubmit = (gcnew System::Windows::Forms::Button());
			this->tbAccount = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pnlTaxTransfer = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pnlNationalTransfer = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pnlFXTransfer = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->bntClearOwn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->plBalance->SuspendLayout();
			this->pnlTransfer->SuspendLayout();
			this->pnlNavigationTransfer->SuspendLayout();
			this->pnlOwnTransfer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbAmount))->BeginInit();
			this->pnlTaxTransfer->SuspendLayout();
			this->pnlNationalTransfer->SuspendLayout();
			this->pnlFXTransfer->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"UserINFo";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 75);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->panel1->Controls->Add(this->lbTime);
			this->panel1->Controls->Add(this->lbDate);
			this->panel1->Controls->Add(this->btOffer);
			this->panel1->Controls->Add(this->btPayments);
			this->panel1->Controls->Add(this->btStart);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(150, 403);
			this->panel1->TabIndex = 4;
			// 
			// lbTime
			// 
			this->lbTime->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbTime->ForeColor = System::Drawing::Color::White;
			this->lbTime->Location = System::Drawing::Point(4, 327);
			this->lbTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbTime->Name = L"lbTime";
			this->lbTime->Size = System::Drawing::Size(143, 23);
			this->lbTime->TabIndex = 7;
			this->lbTime->Text = L"Time";
			this->lbTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbDate
			// 
			this->lbDate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbDate->ForeColor = System::Drawing::Color::White;
			this->lbDate->Location = System::Drawing::Point(4, 350);
			this->lbDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(143, 23);
			this->lbDate->TabIndex = 6;
			this->lbDate->Text = L"Current Date";
			this->lbDate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btOffer
			// 
			this->btOffer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->btOffer->FlatAppearance->BorderSize = 0;
			this->btOffer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btOffer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btOffer->ForeColor = System::Drawing::Color::White;
			this->btOffer->Location = System::Drawing::Point(0, 214);
			this->btOffer->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btOffer->Name = L"btOffer";
			this->btOffer->Size = System::Drawing::Size(150, 39);
			this->btOffer->TabIndex = 2;
			this->btOffer->Text = L"Offer";
			this->btOffer->UseVisualStyleBackColor = false;
			// 
			// btPayments
			// 
			this->btPayments->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->btPayments->FlatAppearance->BorderSize = 0;
			this->btPayments->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btPayments->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btPayments->ForeColor = System::Drawing::Color::White;
			this->btPayments->Location = System::Drawing::Point(0, 170);
			this->btPayments->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btPayments->Name = L"btPayments";
			this->btPayments->Size = System::Drawing::Size(150, 39);
			this->btPayments->TabIndex = 1;
			this->btPayments->Text = L"Payments";
			this->btPayments->UseVisualStyleBackColor = false;
			this->btPayments->Click += gcnew System::EventHandler(this, &MainForm::btPayments_Click);
			// 
			// btStart
			// 
			this->btStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->btStart->FlatAppearance->BorderSize = 0;
			this->btStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btStart->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btStart->ForeColor = System::Drawing::Color::White;
			this->btStart->Location = System::Drawing::Point(0, 126);
			this->btStart->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btStart->Name = L"btStart";
			this->btStart->Size = System::Drawing::Size(150, 39);
			this->btStart->TabIndex = 0;
			this->btStart->Text = L"Start";
			this->btStart->UseVisualStyleBackColor = false;
			this->btStart->Click += gcnew System::EventHandler(this, &MainForm::btStart_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(0, 375);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 28);
			this->button1->TabIndex = 3;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(151, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(186, 122);
			this->panel2->TabIndex = 5;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->lbAccountInfo);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(185, 75);
			this->panel3->TabIndex = 1;
			// 
			// lbAccountInfo
			// 
			this->lbAccountInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbAccountInfo->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lbAccountInfo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbAccountInfo->ForeColor = System::Drawing::Color::Black;
			this->lbAccountInfo->Location = System::Drawing::Point(0, 37);
			this->lbAccountInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAccountInfo->Name = L"lbAccountInfo";
			this->lbAccountInfo->Size = System::Drawing::Size(181, 37);
			this->lbAccountInfo->TabIndex = 1;
			this->lbAccountInfo->Text = L"UserINFo";
			this->lbAccountInfo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(96, 92);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 29);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Tranfser";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(0, 92);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 29);
			this->button2->TabIndex = 2;
			this->button2->Text = L"History";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// plBalance
			// 
			this->plBalance->BackColor = System::Drawing::Color::WhiteSmoke;
			this->plBalance->Controls->Add(this->button3);
			this->plBalance->Controls->Add(this->label4);
			this->plBalance->Controls->Add(this->button2);
			this->plBalance->Controls->Add(this->lbInterlocks);
			this->plBalance->Controls->Add(this->lbSoldo);
			this->plBalance->Controls->Add(this->label3);
			this->plBalance->Controls->Add(this->lbBalance);
			this->plBalance->Controls->Add(this->label2);
			this->plBalance->ForeColor = System::Drawing::Color::Black;
			this->plBalance->Location = System::Drawing::Point(345, 0);
			this->plBalance->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->plBalance->Name = L"plBalance";
			this->plBalance->Size = System::Drawing::Size(185, 122);
			this->plBalance->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(95, 44);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 19);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Interlocks";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbInterlocks
			// 
			this->lbInterlocks->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbInterlocks->ForeColor = System::Drawing::Color::Brown;
			this->lbInterlocks->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbInterlocks->Location = System::Drawing::Point(98, 63);
			this->lbInterlocks->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbInterlocks->Name = L"lbInterlocks";
			this->lbInterlocks->Size = System::Drawing::Size(82, 26);
			this->lbInterlocks->TabIndex = 4;
			this->lbInterlocks->Text = L"Interlocks";
			this->lbInterlocks->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbSoldo
			// 
			this->lbSoldo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbSoldo->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbSoldo->Location = System::Drawing::Point(4, 63);
			this->lbSoldo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbSoldo->Name = L"lbSoldo";
			this->lbSoldo->Size = System::Drawing::Size(82, 26);
			this->lbSoldo->TabIndex = 3;
			this->lbSoldo->Text = L"Soldo";
			this->lbSoldo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(0, 44);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Soldo";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbBalance
			// 
			this->lbBalance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbBalance->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbBalance->Location = System::Drawing::Point(4, 19);
			this->lbBalance->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbBalance->Name = L"lbBalance";
			this->lbBalance->Size = System::Drawing::Size(176, 26);
			this->lbBalance->TabIndex = 1;
			this->lbBalance->Text = L"funds available";
			this->lbBalance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(30, 0);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 19);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Funds available";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// pnlTransfer
			// 
			this->pnlTransfer->Controls->Add(this->pnlNavigationTransfer);
			this->pnlTransfer->Controls->Add(this->pnlOwnTransfer);
			this->pnlTransfer->Controls->Add(this->pnlTaxTransfer);
			this->pnlTransfer->Controls->Add(this->pnlNationalTransfer);
			this->pnlTransfer->Controls->Add(this->pnlFXTransfer);
			this->pnlTransfer->Location = System::Drawing::Point(157, 128);
			this->pnlTransfer->Name = L"pnlTransfer";
			this->pnlTransfer->Size = System::Drawing::Size(373, 263);
			this->pnlTransfer->TabIndex = 2;
			// 
			// pnlNavigationTransfer
			// 
			this->pnlNavigationTransfer->Controls->Add(this->btnNational);
			this->pnlNavigationTransfer->Controls->Add(this->btnOwn);
			this->pnlNavigationTransfer->Controls->Add(this->button4);
			this->pnlNavigationTransfer->Controls->Add(this->button5);
			this->pnlNavigationTransfer->Location = System::Drawing::Point(0, 0);
			this->pnlNavigationTransfer->Name = L"pnlNavigationTransfer";
			this->pnlNavigationTransfer->Size = System::Drawing::Size(373, 38);
			this->pnlNavigationTransfer->TabIndex = 9;
			// 
			// btnNational
			// 
			this->btnNational->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->btnNational->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnNational->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnNational->FlatAppearance->BorderSize = 0;
			this->btnNational->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNational->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnNational->ForeColor = System::Drawing::Color::White;
			this->btnNational->Location = System::Drawing::Point(0, 0);
			this->btnNational->Name = L"btnNational";
			this->btnNational->Size = System::Drawing::Size(82, 38);
			this->btnNational->TabIndex = 4;
			this->btnNational->Text = L"National";
			this->btnNational->UseVisualStyleBackColor = false;
			this->btnNational->Click += gcnew System::EventHandler(this, &MainForm::btnNational_Click);
			// 
			// btnOwn
			// 
			this->btnOwn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->btnOwn->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnOwn->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnOwn->FlatAppearance->BorderSize = 0;
			this->btnOwn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOwn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOwn->ForeColor = System::Drawing::Color::White;
			this->btnOwn->Location = System::Drawing::Point(82, 0);
			this->btnOwn->Name = L"btnOwn";
			this->btnOwn->Size = System::Drawing::Size(97, 38);
			this->btnOwn->TabIndex = 5;
			this->btnOwn->Text = L"Own";
			this->btnOwn->UseVisualStyleBackColor = false;
			this->btnOwn->Click += gcnew System::EventHandler(this, &MainForm::btnOwn_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->button4->Dock = System::Windows::Forms::DockStyle::Right;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(179, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 38);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Tax";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->button5->Dock = System::Windows::Forms::DockStyle::Right;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(276, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 38);
			this->button5->TabIndex = 7;
			this->button5->Text = L"FX";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// pnlOwnTransfer
			// 
			this->pnlOwnTransfer->Controls->Add(this->bntClearOwn);
			this->pnlOwnTransfer->Controls->Add(this->tbAmount);
			this->pnlOwnTransfer->Controls->Add(this->lbTransfer);
			this->pnlOwnTransfer->Controls->Add(this->lbOwn);
			this->pnlOwnTransfer->Controls->Add(this->bntSubmit);
			this->pnlOwnTransfer->Controls->Add(this->tbAccount);
			this->pnlOwnTransfer->Controls->Add(this->label6);
			this->pnlOwnTransfer->Controls->Add(this->label7);
			this->pnlOwnTransfer->Location = System::Drawing::Point(0, 42);
			this->pnlOwnTransfer->Name = L"pnlOwnTransfer";
			this->pnlOwnTransfer->Size = System::Drawing::Size(373, 221);
			this->pnlOwnTransfer->TabIndex = 10;
			// 
			// tbAmount
			// 
			this->tbAmount->Location = System::Drawing::Point(162, 96);
			this->tbAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(163, 32);
			this->tbAmount->TabIndex = 8;
			// 
			// lbTransfer
			// 
			this->lbTransfer->AutoSize = true;
			this->lbTransfer->Location = System::Drawing::Point(162, 178);
			this->lbTransfer->Name = L"lbTransfer";
			this->lbTransfer->Size = System::Drawing::Size(0, 23);
			this->lbTransfer->TabIndex = 14;
			// 
			// lbOwn
			// 
			this->lbOwn->AutoSize = true;
			this->lbOwn->Location = System::Drawing::Point(158, 16);
			this->lbOwn->Name = L"lbOwn";
			this->lbOwn->Size = System::Drawing::Size(50, 23);
			this->lbOwn->TabIndex = 8;
			this->lbOwn->Text = L"Own";
			this->lbOwn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bntSubmit
			// 
			this->bntSubmit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bntSubmit->Location = System::Drawing::Point(162, 146);
			this->bntSubmit->Name = L"bntSubmit";
			this->bntSubmit->Size = System::Drawing::Size(163, 25);
			this->bntSubmit->TabIndex = 13;
			this->bntSubmit->Text = L"Submit";
			this->bntSubmit->UseVisualStyleBackColor = true;
			this->bntSubmit->Click += gcnew System::EventHandler(this, &MainForm::bntSubmit_Click);
			// 
			// tbAccount
			// 
			this->tbAccount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAccount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbAccount->Location = System::Drawing::Point(162, 54);
			this->tbAccount->Name = L"tbAccount";
			this->tbAccount->Size = System::Drawing::Size(163, 25);
			this->tbAccount->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(28, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 29);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Amount";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(28, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 29);
			this->label7->TabIndex = 10;
			this->label7->Text = L"A/C";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlTaxTransfer
			// 
			this->pnlTaxTransfer->Controls->Add(this->label10);
			this->pnlTaxTransfer->Location = System::Drawing::Point(0, 42);
			this->pnlTaxTransfer->Name = L"pnlTaxTransfer";
			this->pnlTaxTransfer->Size = System::Drawing::Size(373, 221);
			this->pnlTaxTransfer->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(162, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 23);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Tax";
			// 
			// pnlNationalTransfer
			// 
			this->pnlNationalTransfer->Controls->Add(this->label8);
			this->pnlNationalTransfer->Location = System::Drawing::Point(0, 42);
			this->pnlNationalTransfer->Name = L"pnlNationalTransfer";
			this->pnlNationalTransfer->Size = System::Drawing::Size(373, 221);
			this->pnlNationalTransfer->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(162, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 23);
			this->label8->TabIndex = 0;
			this->label8->Text = L"National";
			// 
			// pnlFXTransfer
			// 
			this->pnlFXTransfer->Controls->Add(this->label9);
			this->pnlFXTransfer->Location = System::Drawing::Point(0, 42);
			this->pnlFXTransfer->Name = L"pnlFXTransfer";
			this->pnlFXTransfer->Size = System::Drawing::Size(373, 221);
			this->pnlFXTransfer->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(162, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 23);
			this->label9->TabIndex = 0;
			this->label9->Text = L"FX";
			// 
			// bntClearOwn
			// 
			this->bntClearOwn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->bntClearOwn->Location = System::Drawing::Point(32, 146);
			this->bntClearOwn->Name = L"bntClearOwn";
			this->bntClearOwn->Size = System::Drawing::Size(92, 25);
			this->bntClearOwn->TabIndex = 15;
			this->bntClearOwn->Text = L"Clear";
			this->bntClearOwn->UseVisualStyleBackColor = true;
			this->bntClearOwn->Click += gcnew System::EventHandler(this, &MainForm::bntClearOwn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(534, 403);
			this->Controls->Add(this->pnlTransfer);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->plBalance);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->plBalance->ResumeLayout(false);
			this->plBalance->PerformLayout();
			this->pnlTransfer->ResumeLayout(false);
			this->pnlNavigationTransfer->ResumeLayout(false);
			this->pnlOwnTransfer->ResumeLayout(false);
			this->pnlOwnTransfer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbAmount))->EndInit();
			this->pnlTaxTransfer->ResumeLayout(false);
			this->pnlTaxTransfer->PerformLayout();
			this->pnlNationalTransfer->ResumeLayout(false);
			this->pnlNationalTransfer->PerformLayout();
			this->pnlFXTransfer->ResumeLayout(false);
			this->pnlFXTransfer->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion+
	public: Customers^ customer;
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserInfo1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
/*	FormAccount^ account = gcnew FormAccount();
	account->MdiChildren;
	account->Show();
	*/
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	timer1->Start();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	lbDate->Text = DateTime().Now.ToString();
	lbTime->Text = DateTime().Now.ToString("HH:mm:ss");
}
private: System::Void btPayments_Click(System::Object^ sender, System::EventArgs^ e){
	/*
	PaymentForm^ payments = gcnew PaymentForm();
	payments->MdiParent;
	payments->ShowDialog();
	//this->Activate();
	*/
	pnlTransfer->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTransfer->Show();
}
private: System::Void btStart_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTransfer->Hide();
}

private: System::Void btnNational_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlNationalTransfer->BringToFront();
}
private: System::Void btnOwn_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOwnTransfer->BringToFront();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTaxTransfer->BringToFront();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlFXTransfer->BringToFront();
}

private: System::Void bntSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ accountNumber = this->tbAccount->Text;
	String^ Amount = this->tbAmount->Text;
	Decimal^ soldo = Convert::ToDecimal(Amount);

	//float convertSoldo = (float)(Convert::ToDouble(sqlSoldo));
	//float newBalance = (float)(Convert::ToDouble(Amount));
	//float soldo = convertSoldo + newBalance;
	if (tbAmount->Value == 0 || accountNumber->Length == 0) {
		MessageBox::Show("Please enter account number or correct value",
			"Account number or Value Error", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\mssqlserver01;Initial Catalog=banksystem;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM customers WHERE accountNumber=@accountNumber;"
			"UPDATE Customers SET soldo += @soldo WHERE accountNumber = @accountNumber; ";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@accountNumber", accountNumber);
		command.Parameters->AddWithValue("@soldo", soldo);

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

			lbTransfer->Text = "Transfer Success";
		}
		else {
			MessageBox::Show("Account number is incorrect or amount",
				"Account number or amount Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}
}
private: System::Void bntClearOwn_Click(System::Object^ sender, System::EventArgs^ e) {
	lbTransfer->Text = "";
	tbAccount->Text = "";
	tbAmount->Value = 0;
}
};
}
