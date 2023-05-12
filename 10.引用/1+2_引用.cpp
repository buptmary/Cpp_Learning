#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");
    int a = 10;
    /***
     * 引用的基本使用：
     *    作用：给变量起别名
     *    语法：int &b = a;
     *
     * 引用的注意事项：
     *    1. 引用必须初始化
     *    2. 引用在初始化后，不可以改变
     */
    int &b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "变量a的地址为: " << &a << endl;
    cout << "变量b的地址为: " << &b << endl;

    // int &c;  // 错误，引用变量必须初始化
    int c = 123;
    b = c; // 该操作为赋值操作，不是引用更改

    cout << "a = " << a << endl;
}