

#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;

	while (true)
	{
		MyRestaurantProject::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {

			MyRestaurantProject::RegisterForm registerForm;
			registerForm.ShowDialog();
			if (loginForm.switchToRegister) {
				continue;
			}
		}
		else {
			user = loginForm.user;
			break;
		}

	}

	if (user != nullptr)
	{
		MyRestaurantProject::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Autentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}


}