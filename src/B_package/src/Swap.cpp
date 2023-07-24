#include "B_package/Swap.h"

using namespace std;

void Swap::swap_two(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp; 
}