#include <iostream>
using namespace std;

/***********************************************************************
 * 每个非静态成员函数只会产生一份函数实例，多个同类型对象会公用一块代码
 * this指针存储了对象的地址
 * C++中的每个非静态成员函数都有一个隐含的this指针，指向正在调用该函数的对象
 ************************************************************************/

/*************************************************************************
 * this指针的用途：
 *     1. 当形参和成员变量同名时，可以用this指针来区分
 *     2. 在类的非静态成员函数中返回对象本身，可使用return *this
 *************************************************************************/

class Person
{
public:
    int age;

public:
    Person(int age)
    {
        // 当形参和成员变量同名时，可以用this指针来区分
        this->age = age;
    }

    Person &PersonAddPerson(Person p)
    {
        this->age += p.age;
        return *this;
    }
};

void test1()
{
    Person p1(11);
    cout << "p1.age = " << p1.age << endl;

    Person p2(10);
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
    cout << "p2.age = " << p2.age << endl;
}

int main()
{
    system("chcp 65001");
    test1();
}