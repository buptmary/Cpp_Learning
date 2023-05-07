#include <iostream>
using namespace std;

/**************************************
 * 构造函数两种分类方式：
 *     按参数分：有参构造和无参构造
 *     按类型分：普通构造和拷贝构造
 *
 * 构造函数三种调用方式：
 *     1. 括号法
 *     2. 显示法
 *     3. 隐式转换法
 ***************************************/

class Person
{
public:
    // 无参构造函数 默认构造参数
    Person()
    {
        cout << "无参构造函数！" << endl;
    }

    // 有参构造函数 构造函数可以重载
    Person(int a)
    {
        age = a;
        cout << "有参构造函数！" << endl;
    }

    // 拷贝构造函数
    Person(const Person &p)
    {
        age = p.age;
        cout << "拷贝参构造函数！" << endl;
    }

    // 析构函数
    ~Person()
    {
        cout << "析构函数!" << endl;
    }

public:
    int age;
};

// 2、构造函数的调用
// 2.1 调用有参构造函数
void test1()
{
    Person p1; // 调用无参构造函数
}

// 2.2 调用有参构造函数
void test2()
{
    // 方式1 括号法(常用)
    Person p2(10);
    // 注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明

    // 方式2 显式法
    Person p3 = Person(20);
    Person p4 = Person(p2);
    // Person(10) 单独写就是匿名对象，当前行结束后，马上析构

    // 方式3 隐式转换法
    Person p5 = 10; // Person p5 = Person(10);
    Person p6 = p5; // Person p6 = Person(p5);

    // 注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是 Person(p4) === Person p4;
    // Person (p4);

    cout << p4.age << endl;
}

int main()
{
    system("chcp 65001");
    // test1();
    test2();
}