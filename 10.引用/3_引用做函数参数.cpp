#include <iostream>
using namespace std;

void my_swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void my_swap2(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1;
    int b = 2;
    my_swap1(&a, &b);
    cout << "a = " << a << " b = " << b << endl;

    my_swap2(a, b);
    cout << "a = " << a << " b = " << b << endl;
}