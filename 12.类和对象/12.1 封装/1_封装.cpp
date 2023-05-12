#include <iostream>
using namespace std;

/*******************************************
 * C++ 面向对象的三大特性：
 *      封装、继承、多态
 *******************************************/

/*******************************************
 * 封装：
 *   封装的意义：
 *      1. 将属性和行为作为一个整体，表现生活中的事物
 *      2. 将属性和行为加以权限控制
 *   类的三种访问权限：
 *      1. 公共权限 public     类内可以访问  类外可以访问
 *      2. 保护权限 protected  类内可以访问  类外不可以访问
 *      3. 私有权限 private    类内可以访问  类外不可以访问
 *******************************************/

// 封装示例1：设计一个圆类，求圆的周长
const double PI = 3.1415926;

class Circle
{
public:      // 访问权限  公共的权限
    int m_r; // 半径

    // 行为：获取到圆的周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

// 封装示例2：设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student
{
private:
    string m_name;
    string m_id;

public:
    void setName(string name)
    {
        m_name = name;
    }

    void setID(string id)
    {
        m_id = id;
    }

    void showStudent()
    {
        cout << "name: " << m_name << endl
             << "ID: " << m_id << endl;
    }
};

// 三种权限示例
// 公共权限  public     类内可以访问  类外可以访问
// 保护权限  protected  类内可以访问  子类可以访问     类外不可以访问
// 私有权限  private    类内可以访问  子类不可以访问   类外不可以访问

class Person
{
    // 姓名 公共权限
public:
    string m_name;

    // 汽车 保护权限
protected:
    string m_Car;

    // 银行卡密码 私有权限
private:
    int m_passwd;

public:
    void func()
    {
        m_name = "张三";
        m_Car = "自行车";
        m_passwd = 123456;
    }
};

int main()
{
    system("chcp 65001");
    // 通过圆类，创建圆的对象
    // c1 就是一个具体的圆
    Circle c1;
    c1.m_r = 10; // 给圆对象的半径进行赋值操作

    cout << "圆的周长为：" << c1.calculateZC() << endl;

    Student stu1;
    stu1.setName("Lihua");
    stu1.setID("123456");
    stu1.showStudent();

    Person p1;
    p1.m_name = "Li si";
    // p.m_Car = "奔驰";  //保护权限类外访问不到
    // p.m_Password = 123; //私有权限类外访问不到
}