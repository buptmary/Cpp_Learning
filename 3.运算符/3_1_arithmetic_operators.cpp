#include <iostream>
using namespace std;

int main()
{
    int a1 = 10;
    int b1 = 3;

    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl; // 整数相除结果为取模
    cout << a1 % b1 << endl; // 整数相除结果为取余

    int a2 = 10;
    int b2 = 20;
    cout << a2 / b2 << endl;        // 整数相除结果依然为整数
    cout << (float)a2 / b2 << endl; // 强制类型转换

    double d1 = 0.5;
    double d2 = 0.25;
    cout << d1 / d2 << endl;

    // 递增，递减
    int a = 10;
    cout << a++ << endl; // 后置递增，执行完该语句后进行递增
    cout << a << endl;

    int b = 10;
    cout << --b << endl; // 前置递增（减），先执行递增（减），再执行语句

    // 前置递增先对变量进行++，再计算表达式
    int a3 = 10;
    int b3 = ++a3 * 10;
    cout << b3 << endl;

    // 后置递增先计算表达式，后对变量进行++
    int a4 = 10;
    int b4 = a4++ * 10;
    cout << b4 << endl;
    cout << a4 << endl;
}