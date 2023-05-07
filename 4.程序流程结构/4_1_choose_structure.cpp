#include <iostream>
using namespace std;

void weight_compare_1();
void weight_compare_2();
void switch_test();

int main()
{
    weight_compare_1();
    weight_compare_2();

    switch_test();
}

void weight_compare_1()
{
    int A, B, C;
    cout << "Please input A's weight: " << endl;
    cin >> A;
    cout << "Please input B's weight: " << endl;
    cin >> B;
    cout << "Please input C's weight: " << endl;
    cin >> C;
    if (A > B)
    {
        if (A > C)
        {
            cout << "A is the heaviset!" << endl;
        }
        else
        {
            cout << "C is the heaviset!" << endl;
        }
    }
    else if (A > C)
    {
        cout << "B is the heaviset!" << endl;
    }
    else if (B > C)
    {
        cout << "B is the heaviset!" << endl;
    }
    else
    {
        cout << "C is the heaviset!" << endl;
    }
}

void score_compare()
{
    int score = 0;

    cout << "Please input a score: " << endl;
    cin >> score;

    if (score > 80)
    {
        cout << "Your score is more than 80!" << endl;
        if (score > 90)
        {
            cout << "Your score is more than 90!" << endl;
        }
        else if (score <= 85)
        {
            cout << "Your score is more than 80, but less than 85!" << endl;
        }
        else
        {
            cout << "Your score is more than 85!" << endl;
        }
    }
    else
    {
        cout << "Your score is less than 80!" << endl;
    }
}

void weight_compare_2()
{
    int A, B, C;
    cout << "Please input A's weight: " << endl;
    cin >> A;
    cout << "Please input B's weight: " << endl;
    cin >> B;
    cout << "Please input C's weight: " << endl;
    cin >> C;

    int temp = 0;
    if (A > B)
    {
        temp = A;
        A = B;
        B = temp;
    }
    if (B > C)
    {
        temp = B;
        B = C;
        C = temp;
    }
    if (A > B)
    {
        temp = A;
        A = B;
        B = temp;
    }

    cout << A << "<" << B << "<" << C << endl;
}

void switch_test()
{
    // 请给电影评分
    // 10 ~ 9   经典
    //  8 ~ 7   非常好
    //  6 ~ 5   一般
    //  5分以下 烂片

    /**************************************************
     *
     * switch 语句
     *  1. switch语句中表达式类型只能是整型或者字符型
     *  2. case里如果没有break，那么程序会一直向下执行
     *
     * ************************************************/

    int score = 0;
    cout << "Please input a score:" << endl;
    cin >> score;

    switch (score)
    {
    case 10:
    case 9:
        cout << "AAAAA" << endl;
        break;
    case 8:
        cout << "AAAA" << endl;
        break;
    case 7:
    case 6:
        cout << "AAA" << endl;
        break;
    default:
        cout << "A" << endl;
    }
}