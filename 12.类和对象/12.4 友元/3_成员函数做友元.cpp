#include <iostream>
using namespace std;

class Building;
class GoodBoy
{
public:
    GoodBoy();
    void visit1();
    void visit2();

private:
    Building *building;
};

class Building
{
    // 告诉编译器  goodBoy类中的visit2成员函数 是Building好朋友，可以访问私有内容
    friend void GoodBoy::visit2();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;

public:
    Building();
};

GoodBoy::GoodBoy()
{
    building = new Building;
}

Building::Building()
{
    this->m_BedRoom = "卧室";
    this->m_SittingRoom = "客厅";
}

void GoodBoy::visit1()
{
    cout << "好朋友正在访问: " << building->m_SittingRoom << endl;
    // cout << "好朋友正在访问: " << building->m_BedRoom << endl;
}

void GoodBoy::visit2()
{
    cout << "好朋友正在访问: " << building->m_SittingRoom << endl;
    cout << "好朋友正在访问: " << building->m_BedRoom << endl;
}

void test1()
{
    GoodBoy gb1;
    gb1.visit1();
    gb1.visit2();
}

int main()
{
    system("chcp 65001");
    test1();
}
