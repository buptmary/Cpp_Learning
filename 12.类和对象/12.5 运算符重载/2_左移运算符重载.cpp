#include <iostream>
using namespace std;

class Person
{
    friend ostream &operator<<(ostream &cout, const Person &p);

private:
    int m_A;
    int m_B;

public:
    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }
};

ostream &operator<<(ostream &out, const Person &p)
{
    out << "m_A = " << p.m_A << " m_B = " << p.m_B;
    return out;
}

void test()
{
    Person p1(10, 20);

    cout << p1 << endl;
}

int main()
{
    test();
}