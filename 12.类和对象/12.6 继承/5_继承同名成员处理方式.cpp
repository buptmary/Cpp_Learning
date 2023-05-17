#include <iostream>
using namespace std;

/***************************
 * 4.6.5 继承同名成员处理方式
 ***************************/

// 当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
// 如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域

class Base
{
public:
    int m_A;

public:
    Base()
    {
        m_A = 123;
    }

    void func()
    {
        cout << "Base - func()调用" << endl;
    }

    void func(int a)
    {
        cout << "Base - func(int a)调用" << endl;
    }
};

class Son : public Base
{
public:
    int m_A;

public:
    Son()
    {
        m_A = 20;
    }

    void func()
    {
        cout << "Son - func()调用" << endl;
    }

    void func(int a)
    {
        cout << "Son - func(int a)调用" << endl;
    }
};

void test1()
{
    Son s1;
    cout << "Base类下的成员 m_A : " << s1.Base::m_A << endl; // 不是Base::m_A
    cout << "Son类下的成员 m_A : " << s1.m_A << endl;

    s1.func();
    s1.func(10);

    s1.Base::func();
    s1.Base::func(10);
}

int main()
{
    system("chcp 65001");

    test1();

    return 0;
}