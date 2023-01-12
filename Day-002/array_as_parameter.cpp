#include <iostream>

using namespace std;

void fun(int arr[], int n)
{
    // arr is nt an array it is an pointer to array, array is pass by address
    // it cannot be pass by value whether in c or cpp
    //* means it is pointer to any datatype but [] means it s an pointer to array only
    // the changes made inside this function will reflect to actual array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

// returned by array
int *fun1(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    fun(a, 6);

    // another method
    int *b;
    b = fun1(5);
    // after the function end the p delete but we can access the array created in heap memory using b
}