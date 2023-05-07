#include <iostream>
using namespace std;

/************************************
 * 1. c++中在程序运行前分为全局区和代码区
 * 2. 代码区的特点是共享和只读
 * 3. 全局区中存放全局变量、静态变量、常量
 * 4. 全局常量区中存放const修饰的全局常量和字符串常量
 ************************************/

// 全局变量
int g_a = 10;
int g_b = 10;

// 全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    system("chcp 65001");
    // 局部变量
    int a = 10;
    int b = 10;

    // 打印地址
    cout << "局部变量a的地址为: " << &a << endl;
    cout << "局部变量b的地址为: " << &b << endl;

    cout << "全局变量a的地址为: " << &(g_a) << endl;
    cout << "全局变量b的地址为: " << &(g_b) << endl;

    // 静态变量
    static int s_a = 10;
    static int s_b = 10;

    cout << "静态变量s_a地址为: " << &s_a << endl;
    cout << "静态变量s_b地址为: " << &s_b << endl;

    cout << "字符串常量地址为: " << &"hello world" << endl;
    cout << "字符串常量地址为: " << &"hello world1" << endl;

    cout << "全局常量c_g_a地址为: " << &c_g_a << endl;
    cout << "全局常量c_g_b地址为: " << &c_g_b << endl;

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部常量c_l_a地址为: " << &c_l_a << endl;
    cout << "局部常量c_l_b地址为: " << &c_l_b << endl;
}