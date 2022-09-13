#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace CustomPanels {

	/// <summary>
	/// Summary for NationalTransfer
	/// </summary>
	public ref class NationalTransfer : public System::Windows::Forms::UserControl
	{
	public:
		NationalTransfer(void)
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
		~NationalTransfer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbNational;
	protected:

	protected:

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
			this->lbNational = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbNational
			// 
			this->lbNational->AutoSize = true;
			this->lbNational->Location = System::Drawing::Point(133, 4);
			this->lbNational->Name = L"lbNational";
			this->lbNational->Size = System::Drawing::Size(82, 23);
			this->lbNational->TabIndex = 0;
			this->lbNational->Text = L"National";
			this->lbNational->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NationalTransfer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->lbNational);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"NationalTransfer";
			this->Size = System::Drawing::Size(364, 213);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
