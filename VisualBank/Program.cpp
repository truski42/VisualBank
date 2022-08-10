#include "BankForm.h"
#include "NewAccount.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VisualBank::BankForm bankform;

	bankform.ShowDialog();
}