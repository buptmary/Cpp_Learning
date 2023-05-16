#include <iostream>
using namespace std;

/****************************
 * 4.5.5 关系运算符重载
 ****************************/

class Person
{
public:
    string m_Name;
    int m_Age;

public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    bool operator==(const Person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
        {
            return true;
        }
        else
            return false;
    }

    bool operator!=(const Person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
        {
            return false;
        }
        else
            return true;
    }

    Person &operator=(const Person &p)
    {
        this->m_Age = p.m_Age;
        this->m_Name = p.m_Name;
        return *this;
    }
};

void test1()
{
    Person p1("Lihua", 20);
    Person p2 = p1;

    bool flag = (p1 == p2);
    cout << flag << endl;

    flag = (p1 != p2);
    cout << flag << endl;
}

int main()
{
    test1();
    return 0;
}