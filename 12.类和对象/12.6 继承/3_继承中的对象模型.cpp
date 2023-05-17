#include <iostream>
using namespace std;

/************************
 * 4.6.3 继承中的对象模型
 *************************/

class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son : public Base
{
public:
    int m_D;
};

void test1()
{
    Son s1;
    cout << "sizeof Son = " << sizeof(Son) << endl;
    cout << "sizeof s1 = " << sizeof(s1) << endl;
}

int main()
{
    test1();
    return 0;
}