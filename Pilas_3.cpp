#include "Pilas_3.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int form(array<String^>^ argss)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Projecto1GabrielMajano1202619::Pilas_3 Form;
	Application::Run(% Form);
	return 0;
}

