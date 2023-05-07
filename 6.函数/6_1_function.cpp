#include <iostream>
#include "my_swap.h"
using namespace std;

// 多文件请使用命令行编译
// g++ .\6_1_function.cpp .\my_swap.cpp -o .\6_1_function

int main()
{
    int a = 1;
    int b = 2;
    my_swap(&a, &b);
    cout << "a = " << a << endl
         << "b = " << b << endl;
}