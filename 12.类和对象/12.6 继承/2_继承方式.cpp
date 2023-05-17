#include <iostream>
using namespace std;

/*****************
 * 4.6.2 继承方式
 ******************/

class Base1
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;

public:
    Base1()
    {
        m_A = 1;
        m_B = 2;
        m_C = 3;
    }
};

class Son1 : public Base1
{
public:
    void func()
    {
        m_A; // 可访问 public权限
        m_B; // 可访问 protected权限
        // m_C; // 不可访问

        cout << "m_A = " << m_A << endl;
        cout << "m_B = " << m_B << endl;
        // cout << "m_C = " << m_C << endl;
    }
};

void test1()
{
    Son1 s1;
    s1.func();
    s1.m_A;
}

class Son2 : protected Base1
{
public:
    void func()
    {
        m_A; // 可访问 protected权限
        m_B; // 可访问 protected权限
        // m_C; // 不可访问

        cout << "m_A = " << m_A << endl;
        cout << "m_B = " << m_B << endl;
        // cout << "m_C = " << m_C << endl; // 父类私有成员无法访问
    }
};

void test2()
{
    Son2 s2;
    s2.func();
    // s2.m_A; // protected成员类外均不可访问
}

class Son3 : private Base1
{
public:
    void func()
    {
        m_A; // 可访问 private权限
        m_B; // 可访问 private权限
        // m_C; // 不可访问

        cout << "m_A = " << m_A << endl;
        cout << "m_B = " << m_B << endl;
        // cout << "m_C = " << m_C << endl; // 父类私有成员无法访问
    }
};

void test3()
{
    Son3 s3;
    s3.func();
    // s3.m_A; // 不可访问
}

int main()
{
    test1();
    test2();
    test3();

    return 0;
}