#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &out, const MyInteger &myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }

    // 重载前置++运算符
    MyInteger &operator++()
    {
        m_Num++;
        return *this;
    }

    // 重载后置++运算符
    MyInteger &operator++(int) // int 代表占位参数，用于区分前置 和后置递增
    {
        // 先记录当前本身值，然后让本身值+1，但是返回的是以前的值，达到先返回后++
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }

private:
    int m_Num;
};

ostream &operator<<(ostream &out, const MyInteger &myint)
{
    out << myint.m_Num;
    return out;
}

void test1()
{
    MyInteger myInt;
    cout << myInt << endl;
    cout << ++myInt << endl;
}

void test2()
{
    MyInteger myInt;
    cout << myInt++ << endl;
    cout << myInt << endl;
}

int main()
{
    test1();
    test2();
}