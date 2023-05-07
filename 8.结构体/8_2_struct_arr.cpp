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
    // 结构体数组
    student arr[3] = {
        {"L1", 18, 80},
        {"L2", 19, 60},
        {"L3", 20, 70},
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "Name:" << arr[i].name << " Age: " << arr[i].age << " Score: " << arr[i].score << endl;
    }
}