#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[10];

    int *a = new int(100);

    cout << *a << endl;

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    delete a;
    // 释放数组 delete后加[]
    delete[] arr;
}