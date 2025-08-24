#include "MyInterface.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace HomeWork40Gui;

[STAThreadAttribute]

void main()
{
	Application::Run(gcnew MyInterface());
}