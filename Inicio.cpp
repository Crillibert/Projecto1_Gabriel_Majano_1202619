#include "Inicio.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ argss)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Projecto1GabrielMajano1202619::Inicio mainForm;
	Application::Run(% mainForm);
	return 0;
}


