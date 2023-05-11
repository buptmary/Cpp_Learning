#include <iostream>
using namespace std;

/*****************************************
 * C++中，类内的成员变量和成员函数分开存储
 * 只有非静态成员变量才属于类的对象上
 *****************************************/

class Person
{
public:
    // 非静态成员变量占用对象空间
    int m_A;
    Person()
    {
        m_A = 0;
    }

    // 静态成员变量不占用对象空间
    static int m_B;

    // 函数也不占用对象空间，所有函数共享一个函数实例
    void func()
    {
        cout << "m_A: " << this->m_A << endl;
    }

    // 静态成员函数也不占用对象空间
    static void sfunc()
    {
        cout << "static func" << endl;
    }
};

int Person::m_B = 10;

int main()
{
    cout << sizeof(Person) << endl;
}