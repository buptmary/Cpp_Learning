#include <iostream>
using namespace std;

int main()
{
    // 1、指针的定义
    int a = 10;

    int *p;
    p = &a;

    cout << "&a = " << &a << endl
         << "p = " << p << endl
         << "*p = " << *p << endl;

    cout << "sizeof(a) = " << sizeof(a) << endl
         << "sizeof(p) = " << sizeof(p) << endl
         << "sizeof(char *) = " << sizeof(char *) << endl
         << "sizeof(float *) = " << sizeof(float *) << endl
         << "sizeof(bool *) = " << sizeof(bool *) << endl;
}