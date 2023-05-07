#include <iostream>
using namespace std;

int main()
{
    // 两种风格
    // 1. C风格字符串：
    char str1[] = "Hello world! C";
    cout << str1 << endl;

    // 2. C++风格字符串
    string str2 = "hello world! C++";
    cout << str2 << endl;

    getline(cin, str2);
    cout << str2 << endl;
}