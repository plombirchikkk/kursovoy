#include "mainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SportSchool::mainForm form;
	Application::Run(% form);
}