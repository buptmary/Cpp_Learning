#include <iostream>
using namespace std;

class Phone
{
public:
    string m_phoneName;

public:
    Phone(string name) : m_phoneName(name)
    {
        cout << "Phone 构造" << endl;
    }

    ~Phone()
    {
        cout << "Phone 析构" << endl;
    }
};

class Person
{
public:
    string m_Name;
    Phone m_Phone;

public:
    Person(string name, string phone_name) : m_Name(name), m_Phone(phone_name)
    {
        cout << "Person 构造" << endl;
    }

    ~Person()
    {
        cout << "Person 析构" << endl;
    }

    void playGame()
    {
        cout << m_Name << " 正在使用" << m_Phone.m_phoneName << " 牌手机！" << endl;
    }
};

void test1()
{
    Person p1("LiHua", "Honor");
    p1.playGame();
}

int main()
{
    system("chcp 65001");
    test1();
}