#include <iostream>
using namespace std;

/*******************
 * 函数调用运算符重载
 *******************/

/*****************************************************
 * - 函数调用运算符 () 也可以重载
 * - 由于重载后使用的方式非常像函数的调用，因此称为仿函数
 * - 仿函数没有固定写法，非常灵活
 *****************************************************/

class MyPrint
{
public:
    void operator()(string text)
    {
        cout << "函数调用运算符重载" << endl;
        cout << text << endl;
    }
};

void test1()
{
    MyPrint mp1;

    mp1("Hello");
}

class MyAdd
{
public:
    int operator()(int v1, int v2)
    {
        return v1 + v2;
    }
};

void test2()
{
    MyAdd madd;
    int ret = madd(1, 2);
    cout << "ret = " << ret << endl;

    // 匿名对象调用
    cout << "MyAdd()(10,20) = " << MyAdd()(10, 20) << endl;
}

int main()
{
    system("chcp 65001");

    test1();
    test2();

    return 0;
}