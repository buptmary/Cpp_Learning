#include <iostream>
using namespace std;

/******************************
 *4.6.7 多继承语法
 ******************************/

class Base1
{
public:
    int m_A;

public:
    Base1()
    {
        m_A = 1;
    }
};

class Base2
{
public:
    int m_A;

public:
    Base2()
    {
        m_A = 2;
    }
};

// 语法：class 子类：继承方式 父类1 ，继承方式 父类2
class Son : public Base1, public Base2
{
public:
    int m_C;
    int m_D;

public:
    Son()
    {
        m_C = 3;
        m_D = 4;
    }
};

void test1()
{
    Son s1;
    cout << "sizeof Son = " << sizeof(s1) << endl;
    cout << s1.Base1::m_A << endl;
    cout << s1.Base2::m_A << endl;
}

int main()
{
    test1();
    return 0;
}