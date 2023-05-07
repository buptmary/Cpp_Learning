#include <iostream>
#include <ctime>
using namespace std;

struct Student
{
    string name;
    int score;
};

struct Teacher
{
    string name;
    Student stu[5];
};

void init_space(Teacher tea[], int len)
{
    string tName = "teacher";
    string sName = "student";
    string nameSeed = "0123456789";

    for (int i = 0; i < len; i++)
    {
        tea[i].name = tName + nameSeed[i];
        for (int j = 0; j < 5; j++)
        {
            tea[i].stu[j].name = sName + nameSeed[j];
            tea[i].stu[j].score = rand() % 61 + 40;
        }
    }
}

void printTeachers(Teacher tea[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << tea[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\tName: " << tea[i].stu[j].name << "Score: " << tea[i].stu[j].score << endl;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL)); // 随机数种子 头文件 #include <ctime>
    Teacher tea[6];
    int len = sizeof(tea) / sizeof(Teacher);

    init_space(tea, len);

    printTeachers(tea, len);
}