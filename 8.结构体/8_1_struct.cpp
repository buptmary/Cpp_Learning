#include <iostream>
using namespace std;

struct student
{
    // 成员列表
    string name;
    int age;
    int score;
} stu3; // 定义结构体时顺便创建变量

int main()
{
    student stu1;

    stu1.name = "Lihua";
    stu1.age = 15;
    stu1.score = 100;

    cout << "Name: " << stu1.name << endl
         << "Age: " << stu1.age << endl
         << "Score: " << stu1.score << endl;
}