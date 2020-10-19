#include "Pilas_6.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int form1(array<String^>^ argss)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Projecto1GabrielMajano1202619::Pilas_6 Form1;
	Application::Run(% Form1);
	return 0;
}


