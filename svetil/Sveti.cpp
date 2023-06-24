#include "sveti.h"
#include <Windows.h>
using namespace svetil;
[STAThread] // использование многопоточности. В одном процессе два окна
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm); 
    return 0;
     
}