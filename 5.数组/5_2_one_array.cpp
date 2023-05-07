#include <iostream>
using namespace std;

int main()
{
    // 数组名用途
    // 1、可以获取整个数组占用内存空间大小
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The size of array is " << sizeof(arr) << endl;
    cout << "The size of array of each element is " << sizeof(arr[0]) << endl;
    cout << "The element_num of array is " << sizeof(arr) / sizeof(arr[0]) << endl;

    // 2、可以通过数组名获取到数组首地址
    cout << arr << endl;
    cout << &arr[1] << endl;
}