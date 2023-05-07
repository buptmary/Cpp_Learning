#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;

    // ch = "abcde"; // 错误，不可以用双引号
    // ch = 'abcde'; // 错误，单引号只能引用一个字符

    cout << (int)ch << endl;

    ch = 98;
    cout << ch << endl;
}