#pragma once

namespace VisualBank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o NewAccount
	/// </summary>
	public ref class NewAccount : public System::Windows::Forms::Form
	{
	public:
		NewAccount(void)
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
		~NewAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ nameLabel;
	protected:
	private: System::Windows::Forms::Label^ surnameLabel;
	private: System::Windows::Forms::Label^ countryLabel;
	private: System::Windows::Forms::Label^ birthLabel;
	private: System::Windows::Forms::Label^ personalLabel;

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
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->surnameLabel = (gcnew System::Windows::Forms::Label());
			this->countryLabel = (gcnew System::Windows::Forms::Label());
			this->birthLabel = (gcnew System::Windows::Forms::Label());
			this->personalLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			this->nameLabel->Location = System::Drawing::Point(68, 58);
			this->nameLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(110, 30);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"First name";
			// 
			// surnameLabel
			// 
			this->surnameLabel->Location = System::Drawing::Point(68, 88);
			this->surnameLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->surnameLabel->Name = L"surnameLabel";
			this->surnameLabel->Size = System::Drawing::Size(110, 30);
			this->surnameLabel->TabIndex = 1;
			this->surnameLabel->Text = L"Last name";
			// 
			// countryLabel
			// 
			this->countryLabel->Location = System::Drawing::Point(68, 118);
			this->countryLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->countryLabel->Name = L"countryLabel";
			this->countryLabel->Size = System::Drawing::Size(122, 30);
			this->countryLabel->TabIndex = 2;
			this->countryLabel->Text = L"Birth country";
			// 
			// birthLabel
			// 
			this->birthLabel->Location = System::Drawing::Point(68, 148);
			this->birthLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->birthLabel->Name = L"birthLabel";
			this->birthLabel->Size = System::Drawing::Size(122, 30);
			this->birthLabel->TabIndex = 3;
			this->birthLabel->Text = L"Date of birth";
			// 
			// personalLabel
			// 
			this->personalLabel->Location = System::Drawing::Point(68, 178);
			this->personalLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->personalLabel->Name = L"personalLabel";
			this->personalLabel->Size = System::Drawing::Size(122, 30);
			this->personalLabel->TabIndex = 4;
			this->personalLabel->Text = L"Personal ID";
			// 
			// NewAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 438);
			this->Controls->Add(this->personalLabel);
			this->Controls->Add(this->birthLabel);
			this->Controls->Add(this->countryLabel);
			this->Controls->Add(this->surnameLabel);
			this->Controls->Add(this->nameLabel);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"NewAccount";
			this->Text = L"NewAccount";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
