#include "MyForm.h"
#include <iostream> 


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project3::MyForm form; //WinFormsTest - имя вашего проекта 
	Application::Run(%form);
	return 0;
}