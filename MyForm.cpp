#include "MyForm.h"

#include <Windows.h>
std::vector<int>ns;
std::vector<int>ys;
std::vector<int>xs;
std::vector<double> p;
using namespace lab2TerVerForm;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}