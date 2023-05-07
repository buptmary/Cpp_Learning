#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    string name;
    int id;
    int age;
    struct student stu[10];
};

int main()
{
    teacher t1;
    t1.id = 123;
    t1.name = "Wang";
    t1.age = 28;

    t1.stu[0].name = "Lihua";
    t1.stu[0].age = 18;
    t1.stu[0].score = 98;

    cout << t1.stu[0].score << endl;
}