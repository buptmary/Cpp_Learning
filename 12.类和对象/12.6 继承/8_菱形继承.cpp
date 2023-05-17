#include <iostream>
using namespace std;

/*********************
 * 4.6.8 菱形继承
 *********************/

/*********************************************************************
 * 菱形继承概念：
 *    两个派生类继承同一个基类
 *    又有某个类同时继承者两个派生类
 *    这种继承被称为菱形继承，或者钻石继承
 *
 * 菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
 * 利用虚继承可以解决菱形继承问题
 *********************************************************************/

class Animal
{
public:
    int m_Age;
};

// 继承前加virtual关键字后，变为虚继承
// 此时公共的父类Animal称为虚基类
class Sheep : virtual public Animal
{
};

class Tuo : virtual public Animal
{
};

class SheepTuo : public Sheep, public Tuo
{
};

void test1()
{
    SheepTuo st;
    st.Sheep::m_Age = 100;
    st.Tuo::m_Age = 200;

    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age = " << st.m_Age << endl;
}

int main()
{
    test1();
    return 0;
}