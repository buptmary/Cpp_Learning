#include <iostream>
using namespace std;

/**********************************************************
 * 常函数：
 *    - 成员函数后加const后我们称为这个函数为**常函数**
 *    - 常函数内不可以修改成员属性
 *    - 成员属性声明时加关键字mutable后，在常函数中依然可以修改
 **********************************************************/

/********************************************************
 * 常对象：
 *     - 声明对象前加const称该对象为常对象
 *     - 常对象只能调用常函数
 *
 ********************************************************/

class Person
{
public:
    int m_A;
    mutable int m_B;

public:
    Person() : m_A(0), m_B(0) {}

    // this指针的本质是一个指针常量，指针的指向不可修改
    // 如果想让指针指向的值也不可以修改，需要声明常函数
    void showPerson() const
    {
        // const Type* const this;
        // this = NULL;     // 不能修改指针的指向 Person* const this;
        // this->m_A = 100;     // 但是this指针指向的数据是可以修改的

        // const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
        this->m_B = 100;
    }

    void MyFunc1()
    {
        // m_A = 123;
    }

    void MyFunc2() const
    {
        // m_A = 123;
    }
};

// const 修饰对象 常对象
void test1()
{
    const Person p1;
    cout << p1.m_A << endl;
    // p1.m_A = 100;    // 常对象不能修改成员变量的值，但是可以访问
    p1.m_B = 101; // 常对象可以修改mutable修饰成员变量

    // 常对象访问成员函数
    // p1.MyFunc1();  // 常对象不能调用普通成员函数，因为普通成员函数可以修改属性
    p1.MyFunc2();
}

int main()
{
    test1();
}