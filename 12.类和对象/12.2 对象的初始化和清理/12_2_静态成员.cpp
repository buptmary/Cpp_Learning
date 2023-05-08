#include <iostream>
using namespace std;

/*******************************************************
 * 静态成员：
 *     在成员变量和成员函数前加上关键字static，称为静态成员
 * 静态成员变量：
 *     1. 所有对象共享同一份数据
 *     2. 在编译阶段分配内存
 *     3. 类内声明，类外初始化
 * 静态成员函数：
 *     1. 所有对象共享同一个函数
 *     2. 静态成员函数只能访问静态成员变量
 ********************************************************/

class Person
{
public:
    // 静态成员变量特点：
    // 1 在编译阶段分配内存
    // 2 类内声明，类外初始化
    // 3 所有对象共享同一份数据
    static int m_A;
    int m_C;

private:
    static int m_B; // 静态成员变量同样有访问权限

public:
    static void func1()
    {
        cout << "静态成员函数func调用" << endl;
        m_A = 100;
        // m_C = 20;  // 错误，不可访问非静态成员变量
    }

private:
    static void func2()
    {
        cout << "私有静态成员函数func2调用" << endl;
    }
};

int Person::m_A = 10;
int Person::m_B = 10;

void test1()
{
    // 静态成员变量两种访问方式

    // 1、通过对象
    Person p1;
    p1.m_A = 100;
    cout << "p1.m_A = " << p1.m_A << endl;

    Person p2;
    cout << "p2.m_A = " << p2.m_A << endl;
    p2.m_A = 200;
    cout << "p2.m_A = " << p2.m_A << endl;
    cout << "p1.m_A = " << p1.m_A << endl;

    // 2、通过类名
    cout << "m_A = " << Person::m_A << endl;

    // cout << "m_B = " << Person::m_B << endl;  // 私有权限访问不到
}

void test2()
{
    // 静态成员变量两种访问方式

    // 1、通过对象
    Person p1;
    p1.func1();

    // 通过类名
    Person::func1();

    // Person::func2(); // 私有权限访问不到
}

int main()
{
    system("chcp 65001");
    test1();
    test2();
}