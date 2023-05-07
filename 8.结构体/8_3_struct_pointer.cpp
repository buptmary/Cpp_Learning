#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    student stu1 = {
        "Lihua",
        18,
        100,
    };

    student *p = &stu1;
    p->age = 19;
    p->score = 100;
    p->name = "Lie lie";

    cout << "Name:" << p->name << " Age: " << p->age << " Score: " << p->score << endl;
}