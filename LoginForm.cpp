#include <Windows.h>
#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace cli;
using namespace OAIPProject;
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew OAIPProject::LoginForm);
	return 0;
}
