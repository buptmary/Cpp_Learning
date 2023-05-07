#include <iostream>
using namespace std;

int main()
{
    // float 类型必须在数字后加f，否则系统默认为double类型
    float f1 = 3.14f;
    double d1 = 3.14;

    cout << f1 << endl;
    cout << d1 << endl;

    cout << "float sizeof = " << sizeof(f1) << endl;
    cout << "double sizeof = " << sizeof(d1) << endl;

    // 科学计数法
    float f2 = 3e2f;
    float f3 = 3e2;

    cout << "f2 = " << f2 << endl;
    cout << "f2 sizeof = " << sizeof(f2) << endl;
    cout << "f3 = " << f3 << endl;
    cout << "f3 sizeof = " << sizeof(f3) << endl;

    float f4 = 6e-2f;
    cout << "f4 = " << f4 << endl;
}