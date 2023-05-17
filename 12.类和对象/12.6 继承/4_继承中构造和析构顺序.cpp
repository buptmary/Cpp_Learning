#include <iostream>
using namespace std;

/***************************
 * 4.6.4 继承中构造和析构顺序
 ***************************/

class Base
{
public:
    Base()
    {
        cout << "Base 构造函数" << endl;
    }

    ~Base()
    {
        cout << "Base 析构函数" << endl;
    }
};

class Son : public Base
{
public:
    Son()
    {
        cout << "Son 构造函数" << endl;
    }

    ~Son()
    {
        cout << "Son 析构函数" << endl;
    }
};

void test1()
{
    Son s1;
}

int main()
{

    system("chcp 65001");
    test1();

    return 0;
}