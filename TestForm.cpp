#include "TestForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace cli;
[STAThread]
void main3() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OAIPProject::TestForm form; //WinFormsTest - ��� ������ �������
    Application::Run(% form);
}
