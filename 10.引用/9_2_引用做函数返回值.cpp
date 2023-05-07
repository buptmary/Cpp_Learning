#include <iostream>
using namespace std;

/*************************************
 * 引用做函数返回值
 *   作用：引用可以作为函数的返回值存在
 *   注意：不要返回局部变量引用
 *   用法：函数调用为左值
 ********************************/

int &test1()
{
    int a = 1; // 局部变量
    return a;
}

int &test2()
{
    static int b = 2;
    return b;
}

int *test3()
{
    static int c = 10;
    cout << &c << endl;
    return &c;
}

int main()
{
    // 不能返回局部变量的引用
    // int &ref = test1();
    // cout << "ref = " << ref << endl;
    // // cout << "ref = " << ref << endl;

    // 如果函数做左值，那么必须返回引用
    int &ref2 = test2();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    test2() = 1000;
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    cout << test3() << endl;
}