#include <iostream>
using namespace std;

void bubble_sort(int arr[], int arr_num);
void select_sort(int arr[], int arr_num);
void print_arr(int arr[], int arr_num);

int main()
{
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int arr_num = sizeof(arr) / sizeof(int);
    print_arr(arr, arr_num);
    // bubble_sort(arr, arr_num);
    select_sort(arr, arr_num);
    print_arr(arr, arr_num);
}

void print_arr(int arr[], int arr_num)
{
    for (int i = 0; i < arr_num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int arr[], int arr_num)
{
    /*******/
    // 注意：当数组名传入到函数作为参数时，被退化为指向首元素的指针
    /*******/
    int temp;
    bool is_sort;

    for (int i = 0; i < arr_num - 1; i++)
    {
        is_sort = true;
        for (int j = 0; j < arr_num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                is_sort = false;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (is_sort)
        {
            break;
        }
    }
}

void select_sort(int arr[], int arr_num)
{
    int temp;
    int min_id;

    for (int i = 0; i < arr_num - 1; i++)
    {
        min_id = i;
        for (int j = i + 1; j < arr_num; j++)
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
}