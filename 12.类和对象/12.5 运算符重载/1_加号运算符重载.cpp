#include <iostream>
using namespace std;

/********************************************************************
 * 运算符重载:
 *     对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型。
 *
 ********************************************************************/

class Person
{
public:
    int m_A;
    int m_B;

public:
    Person(){};
    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }

    // 1、成员函数实现 + 号运算符重载
    Person operator+(const Person &p)
    {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
};

// // 2、全局函数实现 + 号运算符重载
// Person operator+(const Person &p1, const Person &p2)
// {
//     Person temp;
//     temp.m_A = p1.m_A + p2.m_A;
//     temp.m_B = p1.m_B + p2.m_B;
//     return temp;
// }

// 3、运算符重载也可以发生函数重载
Person operator+(const Person &p1, int val)
{
    Person temp;
    temp.m_A = p1.m_A + val;
    temp.m_B = p1.m_B + val;
    return temp;
}

void test1()
{
    Person p1(10, 10);
    Person p2(10, 20);
    Person p3 = p1 + p2;
    // 成员函数重载本质调用 // Person p3 = p1.operator+(p2);
    // 全局函数重载本质调用 // Person p3 = operator+(p1, p2);

    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;

    Person p4 = p1 + 10;
    // 全局函数重载本质调用 // Person p4 = operator+(p1, 10);
    cout << "p4.m_A = " << p4.m_A << endl;
    cout << "p4.m_B = " << p4.m_B << endl;
}

int main()
{
    test1();
}