#include "Home.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{
	Application::EnableVisualStyles(); 
	Application::SetCompatibleTextRenderingDefault(false); 
	ProjectForm::Home form; 
	Application::Run(% form);

}

