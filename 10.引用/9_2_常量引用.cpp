#include <iostream>
using namespace std;

/***
 * 常量引用：
 *    作用：主要用来修饰形参，防止误操作
 *    在函数形参列表中，可以加 const修饰形参，防止形参修改实参
 *
 * 提高：
 *    `const int a` 和 `const int &a` 都表示函数接收一个常量整数参数
 *    但是前者通过复制整数参数的值传递参数，而后者通过引用传递参数，不需要复制整数参数的值，从而提高了程序的性能
 */

void show_num(const int &a)
{
    // a = 10;  // 错误，表达式必须为可修改的左值
    cout << a << endl;
}

void show_arr(const int arr[])
{
}

int main()
{
    // int& ref = 10;  引用本身需要一个合法的内存空间，因此这行错误
    // 加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp;
    const int &ref = 10;

    // ref = 100;  // 加入const修饰后变量不可以修改
    cout << ref << endl;

    int a = 123;
    show_num(a);
}