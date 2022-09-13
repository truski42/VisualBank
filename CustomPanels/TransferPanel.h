#pragma once
#include "NationalTransfer.h"
#include "OwnTransfer.h"
#include "FXTransfer.h"
#include "TaxTransfer.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace CustomPanels {

	/// <summary>
	/// Summary for TransferPanel
	/// </summary>
	public ref class TransferPanel : public System::Windows::Forms::UserControl
	{
	public:
		TransferPanel(void)
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
		~TransferPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnOwn;
	private: System::Windows::Forms::Button^ btnNational;



	private: System::Windows::Forms::Panel^ panel1;
	private: CustomPanels::NationalTransfer^ pnlNational;

	private: CustomPanels::OwnTransfer^ pnlOwn;
	private: CustomPanels::FXTransfer^ pnlFX;
	private: CustomPanels::TaxTransfer^ pnlTax;






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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnOwn = (gcnew System::Windows::Forms::Button());
			this->btnNational = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlNational = (gcnew CustomPanels::NationalTransfer());
			this->pnlOwn = (gcnew CustomPanels::OwnTransfer());
			this->pnlFX = (gcnew CustomPanels::FXTransfer());
			this->pnlTax = (gcnew CustomPanels::TaxTransfer());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->button5->Location = System::Drawing::Point(88, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 38);
			this->button5->TabIndex = 7;
			this->button5->Text = L"FX";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &TransferPanel::button5_Click);
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
			this->button4->Location = System::Drawing::Point(270, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 38);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Tax";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TransferPanel::button4_Click);
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
			this->btnOwn->Location = System::Drawing::Point(179, 0);
			this->btnOwn->Name = L"btnOwn";
			this->btnOwn->Size = System::Drawing::Size(91, 38);
			this->btnOwn->TabIndex = 5;
			this->btnOwn->Text = L"Own";
			this->btnOwn->UseVisualStyleBackColor = false;
			this->btnOwn->Click += gcnew System::EventHandler(this, &TransferPanel::btnOwn_Click);
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
			this->btnNational->Location = System::Drawing::Point(-3, 0);
			this->btnNational->Name = L"btnNational";
			this->btnNational->Size = System::Drawing::Size(91, 38);
			this->btnNational->TabIndex = 4;
			this->btnNational->Text = L"National";
			this->btnNational->UseVisualStyleBackColor = false;
			this->btnNational->Click += gcnew System::EventHandler(this, &TransferPanel::btnNational_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnNational);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->btnOwn);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(0, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(361, 38);
			this->panel1->TabIndex = 8;
			// 
			// pnlNational
			// 
			this->pnlNational->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pnlNational->Location = System::Drawing::Point(0, 49);
			this->pnlNational->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->pnlNational->Name = L"pnlNational";
			this->pnlNational->Size = System::Drawing::Size(364, 213);
			this->pnlNational->TabIndex = 9;
			// 
			// pnlOwn
			// 
			this->pnlOwn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pnlOwn->Location = System::Drawing::Point(0, 49);
			this->pnlOwn->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->pnlOwn->Name = L"pnlOwn";
			this->pnlOwn->Size = System::Drawing::Size(364, 213);
			this->pnlOwn->TabIndex = 10;
			// 
			// pnlFX
			// 
			this->pnlFX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pnlFX->Location = System::Drawing::Point(0, 49);
			this->pnlFX->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->pnlFX->Name = L"pnlFX";
			this->pnlFX->Size = System::Drawing::Size(364, 213);
			this->pnlFX->TabIndex = 11;
			// 
			// pnlTax
			// 
			this->pnlTax->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pnlTax->Location = System::Drawing::Point(0, 49);
			this->pnlTax->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->pnlTax->Name = L"pnlTax";
			this->pnlTax->Size = System::Drawing::Size(364, 213);
			this->pnlTax->TabIndex = 12;
			// 
			// TransferPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnlNational);
			this->Controls->Add(this->pnlOwn);
			this->Controls->Add(this->pnlTax);
			this->Controls->Add(this->pnlFX);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"TransferPanel";
			this->Size = System::Drawing::Size(364, 262);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnNational_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlNational->BringToFront();
}
private: System::Void btnOwn_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlOwn->BringToFront();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlFX->BringToFront();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlTax->BringToFront();
}
};
}
