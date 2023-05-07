#include <iostream>
using namespace std;

int main()
{
    // 1. 整型输入
    int a = 0;
    cout << "Please input an int variable: " << endl;
    cin >> a;
    cout << a << endl;

    // 2. 浮点型输入
    double d = 0;
    cout << "Please input a float variable: " << endl;
    cin >> d;
    cout << d << endl;

    // 3. 字符串型输入
    string str;
    cout << "Please input a string: " << endl;
    cin >> str;
    cout << str << endl;
}