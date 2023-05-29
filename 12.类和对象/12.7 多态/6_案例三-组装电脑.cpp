#include <iostream>
using namespace std;

/*****************************
 * 4.7.6 多态案例三-电脑组装
 ****************************/

/******************************************************************
    电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）

    将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商

    创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口

    测试时组装三台不同的电脑进行工作
*******************************************************************/

// 抽象CPU类
class CPU
{
public:
    virtual void calculate() = 0;
};

// 抽象显卡类
class GPU
{
public:
    virtual void display() = 0;
};

// 抽象内存条类
class Memory
{
public:
    virtual void storage() = 0;
};

class Computer
{
private:
    CPU *m_cpu;
    GPU *m_gpu;
    Memory *m_mem;

public:
    Computer(CPU *cpu, GPU *gpu, Memory *mem)
    {
        m_cpu = cpu;
        m_gpu = gpu;
        m_mem = mem;
    }

    // 电脑工作函数
    void work()
    {
        // 让零件工作起来，调用接口
        m_cpu->calculate();

        m_gpu->display();

        m_mem->storage();
    }

    ~Computer()
    {
        // 释放CPU指针
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }

        // 释放GPU指针
        if (m_gpu != NULL)
        {
            delete m_gpu;
            m_gpu = NULL;
        }

        // 释放内存指针
        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
    }
};

// 具体厂商

// Intel厂商
class IntelCPU : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel的CPU开始计算了!" << endl;
    }
};

class IntelGPU : public GPU
{
public:
    virtual void display()
    {
        cout << "Intel的显卡开始显示了!" << endl;
    }
};

class IntelMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel的内存条开始存储了!" << endl;
    }
};

class AmdCPU : public CPU
{
    virtual void calculate()
    {
        cout << "Amd的CPU开始计算了!" << endl;
    }
};

class NvidiaGPU : public GPU
{
public:
    virtual void display()
    {
        cout << "Nvidia的GPU开始显示了!" << endl;
    }
};

class SamsungMem : public Memory
{
public:
    virtual void storage()
    {
        cout << "Samsung的内存条开始存储了!" << endl;
    }
};

void test1()
{

    CPU *i5 = new IntelCPU;
    CPU *r7 = new AmdCPU;

    GPU *xe80 = new IntelGPU;
    GPU *rtx4090 = new NvidiaGPU;

    Memory *ddr4 = new IntelMemory;
    Memory *ddr5 = new SamsungMem;

    // 创建第一台电脑
    cout << "第一台电脑开始工作: " << endl;
    Computer *pc1 = new Computer(i5, xe80, ddr4);
    pc1->work();
    delete pc1;

    cout << "-----------------------" << endl;
    cout << "第二台电脑开始工作: " << endl;
    Computer *pc2 = new Computer(r7, rtx4090, ddr5);
    pc2->work();
    delete pc2;
}

int main()
{
    system("chcp 65001");

    test1();
    return 0;
}