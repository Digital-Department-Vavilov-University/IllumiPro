#include "sveti.h"
#include <Windows.h>
using namespace svetil;
[STAThread] // ������������� ���������������. � ����� �������� ��� ����
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm); 
    return 0;
     
}