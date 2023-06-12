#include "MyForm.h"
#include <iostream>
#include <vector>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThread]
int main(array<String^>^) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	bolyamgame::MyForm form;
	Application::Run(% form);
}