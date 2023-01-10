#include <iostream>

using namespace std;

// pass by value
void swap_value(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

// pass by address
void swap_address(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

// pass by reference
void swap_value(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10, b = 20;
 
    swap_value(a, b);
    cout << a << b << endl;

    swap_address(&a, &b);
    cout << a << b << endl;

    swap_value(a, b);
    cout << a << b << endl;
}