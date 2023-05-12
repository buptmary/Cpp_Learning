#include <iostream>
using namespace std;

// 函数重载的注意事项
// 1、引用作为重载条件

void func(int &a)
{
    cout << "func(int &a) 调用" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a) 调用" << endl;
}

// void func(int a)
// {
//     cout << "func(int a) 调用" << endl;
// }

int main()
{
    system("chcp 65001");
    int a = 10;
    func(a); // 调用无const

    func(10); // 调用有const
}