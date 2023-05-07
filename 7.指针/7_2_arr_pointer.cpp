#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr; // 指向数组的指针

    cout << "first array is " << arr[0] << endl;
    cout << "arr pointer 1 is " << *p << endl;

    for (int i = 0; i < 10; i++)
    {
        // 利用指针遍历数组
        cout << *p << endl;
        p++;
    }
}