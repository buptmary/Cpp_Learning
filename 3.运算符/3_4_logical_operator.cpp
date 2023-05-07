#include <iostream>
using namespace std;

int main()
{
    /* 逻辑非 */
    bool a = true;
    cout << a << endl;
    cout << !a << endl;
    cout << !!a << endl;

    /* 逻辑与，逻辑或 */

    int a1 = 0x1101;
    int b1 = 0x0010;
    //  单个 & 进行位与操作
    cout << (a1 & b1) << endl; // 0x1101 & 0x0010 = 0
    //  两个 && 逻辑与操作
    cout << (a1 && b1) << endl; // 0x1101 && 0x0010 = 1

    cout << (a1 | b1) << endl; // 0x1101 | 0x0010 = 0x1111
    //  两个 && 逻辑与操作
    cout << (a1 || b1) << endl; // 0x1101 && 0x0010 = 1
}
