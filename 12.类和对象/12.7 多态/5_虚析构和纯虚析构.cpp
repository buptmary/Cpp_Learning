#include <iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal 构造函数调用！" << endl;
    }

    virtual void speak() = 0;

    // 析构函数加上virtual关键字，变成虚析构函数
    // virtual ~Animal()
    //{
    //	cout << "Animal虚析构函数调用！" << endl;
    // }

    // 纯虚析构函数
    virtual ~Animal() = 0;
};

Animal::~Animal()
{
    cout << "Animal 纯虚析构函数调用！" << endl;
}

class Cat : public Animal
{
public:
    string *m_Name;

public:
    Cat(string name)
    {
        cout << "Cat构造函数调用!" << endl;
        m_Name = new string(name);
    }

    void speak()
    {
        cout << *m_Name << "小猫在说话!" << endl;
    }

    ~Cat()
    {
        cout << "Cat析构函数调用!" << endl;
        if (m_Name != NULL)
        {
            delete m_Name;
            m_Name = NULL;
        }
    }
};

void test1()
{
    Animal *animal;
    animal = new Cat("Tom");
    animal->speak();

    // 通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
    // 怎么解决？给基类增加一个虚析构函数
    // 虚析构函数就是用来解决通过父类指针释放子类对象
    delete animal;
}

int main()
{
    system("chcp 65001");

    test1();

    return 0;
}

/*********************************************************
 * 总结：
 *
​ *	1. 虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
 *
​ *	2. 如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
 *
​ *	3. 拥有纯虚析构函数的类也属于抽象类
***********************************************************/