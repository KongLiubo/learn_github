#include "A_package/Run_printf.h"

using namespace std;

void Run_printf::printf_helloworld(std::string str)
{
    this->_str = str;

    cout<< this->_str << endl;
}