#include <iostream>
using namespace std;

/******
 * 在C++中，函数的形参列表中的形参是可以有默认值的
 */

int func(int a, int b, int c = 1, int d = 4)
{
    return a + b + c + d;
}

// 1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
// 2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func2(int a = 1, int b = 2);
int func2(int a, int b)
{
    return a + b;
}

int main()
{
    int temp;
    temp = func(1, 2);
    cout << temp << endl;
    temp = func2();
    cout << temp << endl;
}