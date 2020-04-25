#include "TestForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace cli;
[STAThread]
void main3() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OAIPProject::TestForm form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}
