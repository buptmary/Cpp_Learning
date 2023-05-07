#include <iostream>
using namespace std;

// 单行注释
/*
    1.多行注释
    2.多行注释
    3.多行注释
*/

void Log(const char *message)
{
    std::cout << message << std::endl;
}

int main()
{
    int carrots;
    carrots = 15;
    cout << "I have only " << carrots << " carrots.";

    cout << "Now I will give you some, how many do you want?" << endl;
    cin >> carrots;
    cout << "So you have " << carrots << " carrots";
    return 0;
}