#pragma once
#include "customers.h"
#include "PaymentForm.h"
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
			label1->Text = customer->firstName + " " + customer->lastName;
			lbAccountInfo->Text = "A/C " + customer->accountNumber;
			lbBalance->Text = customer->availableBalance->ToString() + " PLN";
			if (customer->soldo == nullptr) {
				lbSoldo->Text = "0,00 PLN";
			}
			else {
				lbSoldo->Text = customer->soldo->ToString() + " PLN";
			}
			if (customer->interlocks == nullptr) {
				lbInterlocks->Text = "0,00 PLN";
			}
			else {
				lbInterlocks->Text = "-" + customer->interlocks->ToString() + " PLN";
			}
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lbAccountInfo = (gcnew System::Windows::Forms::Label());
			this->plBalance = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbInterlocks = (gcnew System::Windows::Forms::Label());
			this->lbSoldo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbBalance = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->plBalance->SuspendLayout();
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
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->plBalance);
			this->panel2->Location = System::Drawing::Point(151, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(186, 253);
			this->panel2->TabIndex = 5;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
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
			this->button3->Location = System::Drawing::Point(96, 224);
			this->button3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 29);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Tranfser";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(0, 224);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 29);
			this->button2->TabIndex = 2;
			this->button2->Text = L"History";
			this->button2->UseVisualStyleBackColor = true;
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
			// plBalance
			// 
			this->plBalance->BackColor = System::Drawing::Color::WhiteSmoke;
			this->plBalance->Controls->Add(this->label4);
			this->plBalance->Controls->Add(this->lbInterlocks);
			this->plBalance->Controls->Add(this->lbSoldo);
			this->plBalance->Controls->Add(this->label3);
			this->plBalance->Controls->Add(this->lbBalance);
			this->plBalance->Controls->Add(this->label2);
			this->plBalance->ForeColor = System::Drawing::Color::Black;
			this->plBalance->Location = System::Drawing::Point(1, 126);
			this->plBalance->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->plBalance->Name = L"plBalance";
			this->plBalance->Size = System::Drawing::Size(185, 92);
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
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(341, 403);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
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
			this->ResumeLayout(false);

		}
#pragma endregion
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
	PaymentForm^ payments = gcnew PaymentForm();
	payments->MdiChildren;
	payments->Show();
	this->Hide();
}
};
}
