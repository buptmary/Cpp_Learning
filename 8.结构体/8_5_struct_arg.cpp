#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

// 值传递
void printStudent(student stu)
{
    cout << "Name: " << stu.name << endl
         << "Age: " << stu.age << endl
         << "Score: " << stu.score << endl;
}

// 地址传递
void printStudent2(student *stu)
{
    cout << "Name: " << stu->name << endl
         << "Age: " << stu->age << endl
         << "Score: " << stu->score << endl;
}

// const struct 只能改变引用，不能改变值
void printStudent3(const student *stu)
{
    // stu->age = 22;   // 错误，表达式必须是可修改的左值
    cout << "Name: " << stu->name << endl
         << "Age: " << stu->age << endl
         << "Score: " << stu->score << endl;
}

int main()
{
    int a = 10;
    student stu1 = {
        "Lihua",
        18,
        100,
    };

    printStudent(stu1);
    printStudent2(&stu1);
    printStudent3(&stu1);
}
