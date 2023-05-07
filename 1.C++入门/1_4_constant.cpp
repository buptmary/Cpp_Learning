#include <iostream>
using namespace std;

/*
    常量的定义方式：
        1. #define 宏常量
        2. const 修饰变量
*/

/*
    标识符命名规则：
        1. 标识符不可以是关键字
        2. 标识符是由字母、数字、下划线构成
        3. 标识符第一个字只能是字母或下划线
        4. 标识符区分大小写
*/

// 1. #define 宏常量
#define DAY 7

int main()
{
    // 2. const 修饰变量
    const int a = 10;
    // a = 100;   // 表达式必须是可修改的左值

    int abc = 1;
    int _abc = 2;
    int _12abc = 2;
    int _12 = 12;
    int A;

    cout << "a=" << a << endl;
    cout << "A week have " << DAY << " days." << endl;
    // return 0;
}
