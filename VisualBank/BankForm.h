#pragma once

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
	private: System::Windows::Forms::Button^ optionButton;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ loginText;
	private: System::Windows::Forms::Label^ createText;



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
			this->optionButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->loginText = (gcnew System::Windows::Forms::Label());
			this->createText = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// quitButton
			// 
			this->quitButton->Location = System::Drawing::Point(488, 372);
			this->quitButton->Name = L"quitButton";
			this->quitButton->Size = System::Drawing::Size(138, 54);
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
			// optionButton
			// 
			this->optionButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->optionButton->Location = System::Drawing::Point(158, 169);
			this->optionButton->Name = L"optionButton";
			this->optionButton->Size = System::Drawing::Size(85, 33);
			this->optionButton->TabIndex = 3;
			this->optionButton->Text = L"1";
			this->optionButton->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(158, 208);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 33);
			this->button2->TabIndex = 5;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BankForm::button2_Click);
			// 
			// loginText
			// 
			this->loginText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->loginText->Location = System::Drawing::Point(269, 169);
			this->loginText->Name = L"loginText";
			this->loginText->Size = System::Drawing::Size(189, 33);
			this->loginText->TabIndex = 6;
			this->loginText->Text = L"Login to existing account";
			this->loginText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->loginText->Click += gcnew System::EventHandler(this, &BankForm::loginText_Click);
			// 
			// createText
			// 
			this->createText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->createText->Location = System::Drawing::Point(269, 208);
			this->createText->Name = L"createText";
			this->createText->Size = System::Drawing::Size(189, 33);
			this->createText->TabIndex = 7;
			this->createText->Text = L"Create new account";
			this->createText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BankForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 438);
			this->Controls->Add(this->createText);
			this->Controls->Add(this->loginText);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->optionButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->quitButton);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"BankForm";
			this->Text = L"BankForm";
			this->ResumeLayout(false);

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
};
}
