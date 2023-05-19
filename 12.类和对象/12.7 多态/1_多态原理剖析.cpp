#include <iostream>
using namespace std;

// 动物类
class Animal
{
public:
    // Speak函数就是虚函数
    // 函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

// 猫类
class Cat : public Animal
{
public:
    void speak()
    {
        cout << "猫在说话" << endl;
    }
};

// 狗类
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "狗在说话" << endl;
    }
};

void test1()
{
    cout << "sizof Animal = " << sizeof(Animal) << endl;
}

int main()
{
    system("chcp 65001");

    test1();

    return 0;
}