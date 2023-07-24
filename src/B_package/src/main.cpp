#include "A_package/Run_printf.h"
#include "ros/ros.h"
#include "B_package/Swap.h"
using namespace std;

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "use_Apackeage");

    ros::NodeHandle nh;

    Run_printf use_A_package_run;
    use_A_package_run.printf_helloworld("use A_package success!");

    int a = 10, b = 20;
    Swap demo_swap;
    demo_swap.swap_two(a, b);
    cout<< a << " " << b <<endl;

    return 0;
}
