#include "ros/ros.h"
#include "A_package/Run_printf.h"

using namespace std;

int main(int argc, char *argv[])
{
    //执行 ros 节点初始化
    ros::init(argc,argv,"printf_str");
    //创建 ros 节点句柄(非必须)
    ros::NodeHandle nh;
    // //控制台输出 hello world
    // ROS_INFO("hello world!");

    Run_printf temp_run;
    temp_run.printf_helloworld("hello world!");


    return 0;
}