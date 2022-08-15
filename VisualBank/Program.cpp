#include "BankForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

void main() {
	srand((unsigned)time(NULL));

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Customers^ customer = nullptr;
	while (true) {
		VisualBank::BankForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			//show the register form
			VisualBank::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				customer = registerForm.customer;
				break;
			}
		}
		else {
			customer = loginForm.customer;
			break;
		}
	}

	if (customer != nullptr) {
		VisualBank::MainForm mainForm(customer);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication cancel",
			"Program.cpp", MessageBoxButtons::OK);
	}
}