#include <iostream>
using namespace std;

/****************************************
 * 多态的优点：
 *     1. 代码组织结构清楚
 *     2. 可读性强
 *     3. 利于前期和后期的扩展以及维护
 ****************************************/

/********************************************************************
 *案例描述：分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
 ********************************************************************/

// 普通实现
class Calculator
{
public:
    int m_Num1;
    int m_Num2;

public:
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        else if (oper == "/")
        {
            return m_Num1 / m_Num2;
        }
        else
        {
            cout << "error" << endl;
            return EXIT_FAILURE;
        }
    }
};

void test1()
{
    Calculator cal1;
    cal1.m_Num1 = 10;
    cal1.m_Num2 = 20;

    cout << cal1.m_Num1 << " + " << cal1.m_Num2 << " = " << cal1.getResult("+") << endl;
    cout << cal1.m_Num1 << " - " << cal1.m_Num2 << " = " << cal1.getResult("-") << endl;
    cout << cal1.m_Num1 << " * " << cal1.m_Num2 << " = " << cal1.getResult("*") << endl;
}

// 多态实现
// 抽象计算器类
// 多态优点：代码组织结构清晰，可读性强，利于前期和后期的扩展
class Calculator2
{
public:
    int m_Num1;
    int m_Num2;

public:
    virtual int getResult()
    {
        return 0;
    }
};

// 加法计算器
class AddCalculator : public Calculator2
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

// 减法计算器
class SubCalculator : public Calculator2
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

// 乘法计算器
class MulCalculator : public Calculator2
{
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
};

void test2()
{
    // 多态使用条件
    // 父类指针或者引用指向对象

    // 加法运算
    Calculator2 *cal = new AddCalculator;
    cal->m_Num1 = 10;
    cal->m_Num2 = 20;
    cout << cal->m_Num1 << "+" << cal->m_Num2 << "=" << cal->getResult() << endl;
    delete cal; // 堆区内存使用完记得销毁

    cal = new SubCalculator;
    cal->m_Num1 = 10; // 需要重新赋值
    cal->m_Num2 = 20;
    cout << cal->m_Num1 << "-" << cal->m_Num2 << "=" << cal->getResult() << endl;
    delete cal;

    cal = new MulCalculator;
    cal->m_Num1 = 10; // 需要重新赋值
    cal->m_Num2 = 20;
    cout << cal->m_Num1 << "*" << cal->m_Num2 << "=" << cal->getResult() << endl;
    delete cal;
}

int main()
{
    system("chcp 65001");
    // test1();

    test2();

    return 0;
}