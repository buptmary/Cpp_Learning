#include <iostream>
using namespace std;

/****************************************************
 * C++ 中拷贝构造函数调用时机通常有三种情况：
 *     1. 使用一个已经创建完毕的对象来初始化一个新对象
 *     2. 值传递的方式给函数参数传值
 *     3. 以值的方式返回局部对象
 ****************************************************/

class Person
{
public:
    Person()
    {
        cout << "默认构造函数！" << endl;
    }

    Person(int age)
    {
        cout << "有参构造函数！" << endl;
        m_age = age;
    }

    Person(const Person &p)
    {
        cout << "拷贝构造函数！" << endl;
        m_age = p.m_age;
    }

    ~Person()
    {
        cout << "执行析构函数！" << endl;
    }

public:
    int m_age;
};

// 1. 使用一个已创建完毕的对象来初始化一个新对象
void test1()
{
    Person p1(100); // p1对象已创建完毕
    Person p2(p1);  // 调用拷贝构造函数
    Person p3 = p2; // 拷贝构造

    // Person p4；
    // p4 = p3;  // 不是调用拷贝构造函数，赋值操作
}

// 2. 值传递的方式给函数参数传值
// 相当于Person p1 = p;
void dowork(Person p1){};
void test2()
{
    Person p;
    dowork(p);
}

// 3. 以值方式返回局部对象
Person dowork2()
{
    Person p1;
    cout << &p1 << endl;
    return p1;
}

void test3()
{
    Person p = dowork2();
    cout << &p << endl;
}

int main()
{
    system("chcp 65001");
    // test1();
    // test2();
    test3();
}