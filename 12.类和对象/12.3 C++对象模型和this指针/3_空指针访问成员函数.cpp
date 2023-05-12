#include <iostream>
using namespace std;

// 空指针访问成员函数

class Person
{
public:
    int m_age;

public:
    void showClassName()
    {
        cout << "我是Person类" << endl;
    }

    void showPerson()
    {
        if (this == NULL)
        {
            return;
        }
        cout << m_age << endl;
    }
};

void test1()
{
    Person *p = NULL;
    p->showClassName(); // 空指针可以调用成员函数
    p->showPerson();    // 如果成员函数使用了this指针，就不可以
}

int main()
{

    system("chcp 65001");
    test1();
}