#include <iostream>
using namespace std;

int main()
{
    cout << '?' << endl;
    cout << (int)'a' << endl;

    // 八进制转义字符 \101 = 101Q = 65D = 'A'
    cout
        << "\101" << endl;

    // 十六进制转义字符 \x41 = 41H = 65D = 'A'
    cout << "\x41" << endl;

    cout << "\tHello" << endl;
    cout << "\n"
         << endl;
}