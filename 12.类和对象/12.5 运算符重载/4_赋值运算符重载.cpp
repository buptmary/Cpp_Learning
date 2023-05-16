#include <iostream>
using namespace std;

/******************
 * 赋值运算符重载
 ******************/

/**************************************************************
 * c++编译器至少给一个类添加4个函数
 *     1. 默认构造函数(无参，函数体为空)
 *     2. 默认析构函数(无参，函数体为空)
 *     3. 默认拷贝构造函数，对属性进行值拷贝
 *     4. 赋值运算符 operator=，对属性进行值拷贝
 *
 * 注意：
 *     如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题
 *************************************************************/

class Person
{
public:
    int *m_Age;

public:
    Person(int age)
    {
        // 将年龄数据开辟到堆区
        m_Age = new int(age);
    }

    Person(const Person &p)
    {
        cout << "调用拷贝构造函数" << endl;
        this->m_Age = new int(*p.m_Age);
    }

    // 重载赋值运算符
    Person &operator=(Person &p)
    {
        cout << "调用重载赋值运算符" << endl;
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }

        // 编译器提供的代码是浅拷贝
        // m_Age = p.m_Age;

        // 提供深拷贝 解决浅拷贝的问题
        m_Age = new int(*p.m_Age);

        // 返回自身
        return *this;
    }

    ~Person()
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    };
};

void test1()
{
    Person p1(10);
    cout << "p1的年龄为: " << *p1.m_Age << endl;

    Person p2(20);
    cout << "p2的年龄为: " << *p2.m_Age << endl;

    Person p3(50);
    p3 = p1; // 该方式调用 赋值运算符重载
    cout << "p3的年龄为: " << *p3.m_Age << endl;

    Person p4 = p2; // 该方式调用拷贝构造函数
    cout << "p4的年龄为: " << *p4.m_Age << endl;
}

int main()
{
    system("chcp 65001");
    test1();
}