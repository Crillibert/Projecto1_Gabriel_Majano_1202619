#include "Pilas_8.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int form2(array<String^>^ argss)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Projecto1GabrielMajano1202619::Pilas_8 Form2;
	Application::Run(% Form2);
	return 0;
}

