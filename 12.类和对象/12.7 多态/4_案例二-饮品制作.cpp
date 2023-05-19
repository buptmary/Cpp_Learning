#include <iostream>
using namespace std;

// 抽象制作饮品基类
class AbstractDrinking
{
public:
    // 烧水
    virtual void Boil() = 0;
    // 冲泡
    virtual void Brew() = 0;
    // 倒入杯中
    virtual void PourCup() = 0;
    // 加入辅料
    virtual void PutSomething() = 0;

    // 规定流程
    void MakeDrink()
    {
        Boil();
        Brew();
        PourCup();
        PutSomething();
    }
};

// 制作咖啡
class Coffee : public AbstractDrinking
{
public:
    // 烧水
    void Boil()
    {
        cout << "煮农夫山泉!" << endl;
    }

    // 冲泡
    void Brew()
    {
        cout << "冲泡咖啡!" << endl;
    }

    // 倒入杯中
    void PourCup()
    {
        cout << "将咖啡倒入杯中!" << endl;
    }

    // 加入辅料
    void PutSomething()
    {
        cout << "加入牛奶!" << endl;
    }
};

// 制作茶水
class Tea : public AbstractDrinking
{
public:
    // 烧水
    void Boil()
    {
        cout << "煮自来水!" << endl;
    }

    // 冲泡
    void Brew()
    {
        cout << "冲泡茶叶!" << endl;
    }

    // 倒入杯中
    void PourCup()
    {
        cout << "将茶水倒入杯中!" << endl;
    }

    // 加入辅料
    void PutSomething()
    {
        cout << "加入枸杞!" << endl;
    }
};

// 业务函数
void DoWork(AbstractDrinking *drink)
{
    drink->MakeDrink();
    delete drink;
}

void test1()
{
    DoWork(new Coffee);
    cout << "--------------" << endl;
    DoWork(new Tea);
}

int main()
{
    system("chcp 65001");

    test1();

    return 0;
}