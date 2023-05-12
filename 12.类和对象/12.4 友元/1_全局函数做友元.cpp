#include <iostream>
#include <string>
using namespace std;

// 房屋类
class Building
{
    // 告诉编译器 goodBoy全局函数 是 Building类的友元，可以访问类中的私有内容
    friend void googBoy(const Building &building);

public:
    string m_SittingRoom;

private:
    string m_BedRoom;

public:
    Building()
    {
        this->m_SittingRoom = "客厅";
        this->m_BedRoom = "卧室";
    }
};

// 全局函数
void googBoy(const Building &building)
{
    cout << "好朋友全局函数 正在访问: " << building.m_SittingRoom << endl;
    cout << "好朋友全局函数 正在访问: " << building.m_BedRoom << endl; // 若goodBoy函数不是Building类的友元，则无法访问私有成员变量
}

void test1()
{
    Building build;
    googBoy(build);
}

int main()
{
    system("chcp 65001");
    test1();
}