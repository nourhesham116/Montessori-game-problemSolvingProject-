#include "loginFom.h"
using namespace System;
using namespace System::Windows::Forms;
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	login::loginFom form;
	Application::Run(% form);
	return 0;
}

