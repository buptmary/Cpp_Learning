#include <iostream>
using namespace std;

class Building;

class GoodBoy
{
public:
    Building *building;

public:
    GoodBoy();
    // 参观函数 访问Building中的属性
    void visit();
};

// 房屋类
class Building
{
    // 告诉编译器 goodBoy类是Building类的好朋友，可以访问到Building类中私有成员
    friend class GoodBoy;

public:
    string m_SittingRoom;

private:
    string m_BedRoom;

public:
    Building();
};

// 类外写成员函数
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodBoy::GoodBoy()
{
    // 创建一个建筑物
    building = new Building;
}

void GoodBoy::visit()
{
    cout << "好朋友类正在访问: " << building->m_SittingRoom << endl;
    cout << "好朋友类正在访问: " << building->m_BedRoom << endl;
}

void test1()
{
    GoodBoy gb1;
    gb1.visit();
}

int main()
{
    system("chcp 65001");
    test1();
}