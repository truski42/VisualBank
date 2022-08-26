#pragma once

namespace VisualBank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PaymentForm
	/// </summary>
	public ref class PaymentForm : public System::Windows::Forms::Form
	{
	public:
		PaymentForm(void)
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
		~PaymentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbTime;
	private: System::Windows::Forms::Label^ lbDate;
	private: System::Windows::Forms::Button^ btOffer;
	private: System::Windows::Forms::Button^ btPayments;
	private: System::Windows::Forms::Button^ btStart;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	protected:














	protected:














	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PaymentForm::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->btOffer = (gcnew System::Windows::Forms::Button());
			this->btPayments = (gcnew System::Windows::Forms::Button());
			this->btStart = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(152, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(188, 165);
			this->panel3->TabIndex = 8;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gainsboro;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(5, 105);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(180, 40);
			this->button5->TabIndex = 3;
			this->button5->Text = L"International and foreign currency transfer";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gainsboro;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(5, 71);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 28);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Tax transfer";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gainsboro;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(5, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 28);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Own transfer";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gainsboro;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(5, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 28);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Domestic transfer";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->panel1->Controls->Add(this->panel2);
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
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(152, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(188, 403);
			this->panel2->TabIndex = 6;
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
			this->lbTime->TabIndex = 3;
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
			this->lbDate->TabIndex = 4;
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
			this->btPayments->TabIndex = 0;
			this->btPayments->Text = L"Payments";
			this->btPayments->UseVisualStyleBackColor = false;
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
			this->btStart->TabIndex = 1;
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
			this->button1->TabIndex = 5;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PaymentForm::button1_Click);
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
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &PaymentForm::timer1_Tick);
			// 
			// PaymentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 403);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"PaymentForm";
			this->Text = L"PaymentForm";
			this->Load += gcnew System::EventHandler(this, &PaymentForm::PaymentForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	lbDate->Text = DateTime().Now.ToString();
	lbTime->Text = DateTime().Now.ToString("HH:mm:ss");
}
private: System::Void PaymentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	timer1->Start();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	MainForm^ dashboard = gcnew MainForm();
	MdiParent->Show();
}
};
}
