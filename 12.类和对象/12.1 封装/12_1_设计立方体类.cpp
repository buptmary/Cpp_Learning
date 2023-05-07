#include <iostream>
using namespace std;

class Cube
{
private:
    double m_H;
    double m_L;
    double m_W;

public:
    double getL()
    {
        return m_L;
    }

    double getW()
    {
        return m_W;
    }

    double getH()
    {
        return m_H;
    }

    void setH(double H)
    {
        m_H = H;
    }

    void setL(double L)
    {
        m_L = L;
    }

    void setW(double W)
    {
        m_W = W;
    }

public:
    double calc_S()
    {
        return (m_H * m_L + m_H * m_W + m_L * m_W) * 2;
    }

    double calc_V()
    {
        return m_H * m_L * m_W;
    }

    bool is_Same(Cube c_compere)
    {
        if (c_compere.m_H == m_H && c_compere.m_W == m_W && c_compere.m_L == m_L)
        {
            cout << "两立方体相同！" << endl;
            return true;
        }
        else
        {
            cout << "两立方体不同！" << endl;
            return false;
        }
    }
};

bool is_Same(Cube &c1, Cube &c2)
{
    if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
    {
        cout << "两立方体相同！" << endl;
        return true;
    }
    else
    {
        cout << "两立方体不相同！" << endl;
        return false;
    }
}

int main()
{
    system("chcp 65001");

    Cube c1;
    c1.setH(11);
    c1.setL(10);
    c1.setW(10);
    cout << c1.calc_S() << endl;
    cout << c1.calc_V() << endl;

    Cube c2;
    c2.setH(10);
    c2.setL(10);
    c2.setW(10);
    cout << c2.calc_S() << endl;
    cout << c2.calc_V() << endl;

    c1.is_Same(c2);
    is_Same(c1, c2);
}