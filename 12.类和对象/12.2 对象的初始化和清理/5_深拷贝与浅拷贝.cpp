#include <iostream>
using namespace std;

/**********************************************
 * 深拷贝与浅拷贝：
 *     深拷贝：简单的赋值拷贝操作, 指将一个对象中的成员变量的值简单地拷贝到另一个对象中，包括指针变量的地址
 *     浅拷贝：在堆区重新申请空间，进行拷贝操作
 **********************************************/

class Person
{
public:
    Person()
    {
        cout << "调用默认构造函数！" << endl;
    }

    // 有参构造函数
    Person(int age, int height)
    {
        cout << "有参构造函数!" << endl;
        m_age = age;
        m_height = new int(height);
    }

    // 拷贝构造函数
    Person(const Person &p)
    {
        cout << "调用拷贝构造函数！" << endl;
        // 如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区内存问题
        m_age = p.m_age;
        m_height = new int(*p.m_height);
    }

    // 析构函数
    ~Person()
    {
        cout << "调用析构函数！" << endl;
        if (m_height != NULL)
        {
            delete m_height;
        }
    }

public:
    int m_age;
    int *m_height;
};

void test1()
{
    Person p1(18, 180);

    Person p2(p1);

    cout << "p1的年龄: " << p1.m_age << " 身高: " << *p1.m_height << endl;
    cout << "p2的年龄: " << p2.m_age << " 身高: " << *p2.m_height << endl;
}

int main()
{
    system("chcp 65001");
    test1();
}