#include <iostream>
#include <random>
#include <math.h>
using namespace std;

void while_loop()
{
    int num = 0;
    while (num < 10)
    {
        cout << "num = " << num << endl;
        num++;
    }
}

int get_random()
{
    // 随机数生成
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 100);
    return dis(gen);
}

void guess_num()
{
    /******************************************
     * 案例描述：
     * 系统随机生成一个1到100之间的数字，玩家进行猜测，
     * 如果猜错，提示玩家数字过大或过小，
     * 如果猜对恭喜玩家胜利，并且退出游戏。
     ********************************************/
    int num = get_random();
    bool flag = false;
    int temp;

    while (!flag)
    {
        cout << "Please guess the number: " << endl;
        cin >> temp;
        if (temp == num)
        {
            cout << "Yes! The number is " << temp << "!" << endl;
            flag = true;
        }
        else if (temp < num)
        {
            cout << "The number is bigger than it!" << endl;
        }
        else
        {
            cout << "The number is smaller than it!" << endl;
        }
    }
}

void flower_num()
{
    /*****************************************************************
     * 案例描述：
     * 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
     * 求出所有3位数中的水仙花数
     */
    int i = 100;
    int a, b, c, temp;
    while (i < 1000)
    {
        a = i / 100;
        b = (i % 100) / 10;
        c = i % 10;
        // cout << "a = " << a << " b = " << b << " c = " << c << endl;
        temp = pow(a, 3) + pow(b, 3) + pow(c, 3);

        if (temp == i)
            cout << i << endl;
        i++;
    }
}

void kick_desk()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if ((i % 10 == 7) || ((i % 100) / 10 == 7) || (i % 7 == 0))
        {
            cout << i << " Kick the desk!" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}

void multi_table()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << "*" << i << "=" << j * i << " ";
            if (j == i)
            {
                cout << endl;
            }
        }
    }
}

int main()
{
    // while_loop();
    // guess_num();
    // flower_num();
    // kick_desk();
    multi_table();
}