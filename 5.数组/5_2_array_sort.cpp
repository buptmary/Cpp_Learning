#include <iostream>
using namespace std;

void five_pigs();
void reverse_array();
void bubble_sort();
void my_sort();

int main()
{
    // five_pigs();
    // reverse_array();
    // bubble_sort();
    my_sort();
}

void five_pigs()
{
    int arr[5] = {300, 350, 200, 400, 250};
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
}

void reverse_array()
{
    int arr[5] = {0};
    cout << "Please input 5 numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[4 - i] << " ";
    }
    cout << endl;
}

void bubble_sort()
{
    int arr[20] = {0};
    int temp = 0;

    cout << "Please input numbers (less than 20): " << endl;
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    // 优化冒泡排序，加入标志位
    bool flag = true;
    for (int i = 0; i < 20 - 1; i++)
    {
        flag = true;
        for (int j = 0; j < 20 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = false;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (flag == true)
        {
            break;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void my_sort()
{
    int arr[20] = {0};
    int temp = 0;
    int min, min_id;
    cout << "Please input numbers (less than 20): " << endl;
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 20 - 1; i++)
    {
        min_id = i;
        for (int j = i + 1; j < 20; j++)
        {
            if (arr[min_id] > arr[j])
            {
                min_id = j;
            }
        }
        if (min_id != i)
        {
            temp = arr[i];
            arr[i] = arr[min_id];
            arr[min_id] = temp;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
