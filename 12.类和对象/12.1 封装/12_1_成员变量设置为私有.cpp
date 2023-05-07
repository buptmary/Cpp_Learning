#include <iostream>
using namespace std;

/***********************************************************
 * 成员属性设置为私有
 *   优点：
 *          1. 将所有成员属性设置为私有，可以自己控制读写权限
 *          2. 对于写权限，我们可以检测数据的有效性
 ***********************************************************/

class Person
{
private:
    string m_name;
    int m_age;
    string m_lover;
    bool isSet = false;

public:
    // 姓名设置为可读可写
    void setName(string name)
    {
        m_name = name;
    }

    string getName()
    {
        return m_name;
    }

    // 年龄只可以修改一次
    int getAge()
    {
        return m_age;
    }

    void setAge(int age)
    {
        if (!isSet)
        {
            if (age < 0 || age > 150)
            {
                cout << "年龄输入错误！" << endl;
                return;
            }
            m_age = age;
            isSet = true;
        }
        else
        {
            cout << "已设置过年龄,不可以进行修改, 当前年龄为 " << m_age << endl;
        }
    }

    // 情人设置为只写
    void setLover(string lover)
    {
        m_lover = lover;
    }
};

int main()
{
    system("chcp 65001");
    Person p1;

    // 设置姓名（可读可写）
    p1.setName("张三");
    cout << "姓名：" << p1.getName() << endl;

    // 年龄设置
    p1.setAge(40);
    cout << "年龄：" << p1.getAge() << endl;

    // 情人设置
    p1.setLover("李四");

    p1.setAge(15);
}