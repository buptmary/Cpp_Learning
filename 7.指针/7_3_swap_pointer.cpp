#include <iostream>
using namespace std;

void my_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 15;

    my_swap(&a, &b);

    cout << "a = " << a << endl
         << "b = " << b << endl;
}