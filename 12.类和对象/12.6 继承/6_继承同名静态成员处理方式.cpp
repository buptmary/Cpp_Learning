#include <iostream>
using namespace std;

/******************************
 *4.6.6 继承同名静态成员处理方式
 ******************************/

/***********************************************
 * 静态成员和非静态成员出现同名，处理方式一致
 *     - 访问子类同名成员   直接访问即可
 *     - 访问父类同名成员   需要加作用域
 ************************************************/

class Base
{
public:
    static int m_A; // 静态成员变量，类内初始化，类外赋值

public:
    static void func()
    {
        cout << "Base - static void func()" << endl;
    }

    static void func(int a)
    {
        cout << "Base - static void func(int a)" << endl;
    }
};

int Base::m_A = 10;

class Son : public Base
{
public:
    static int m_A;

public:
    static void func()
    {
        cout << "Son - static void func()" << endl;
    }
};

int Son::m_A = 20;

// 同名成员属性
void test1()
{
    // 通过对象访问
    Son s1;
    cout << "Son  下 m_A = " << s1.m_A << endl;
    cout << "Base  下 m_A = " << s1.Base::m_A << endl;

    // 通过类名访问
    cout << "Son  下 m_A = " << Son::m_A << endl;
    cout << "Base  下 m_A = " << Base::m_A << endl;
}

// 同名成员函数
void test2()
{
    // 通过对象访问
    cout << "通过对象访问： " << endl;
    Son s1;
    s1.func();
    s1.Base::func();

    cout << "通过类名访问： " << endl;
    Son::func();
    Base::func();
    Son::Base::func();
    // 出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
    Son::Base::func(100);
}

int main()
{
    system("chcp 65001");

    test1();
    test2();

    return 0;
}