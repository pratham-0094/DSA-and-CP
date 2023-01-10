#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // array - collection of homogenous datatype

    // array declaration
    int a[10]; // default value garbage

    // initializing value
    a[0] = 47;
    a[1] = 26;
    a[2] = 19;

    // declaration + initialization
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // if array size is n but we not initialize all of them then they have default value of 0
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // automatically take size

    // variable-sized array
    int n = 4;
    int b[n]; // it cannot be initialized

    // accessing element at particular index
    cout << a[3] << endl;

    // accessing array element using for loop
    for (int i = 0; i < 10; i++)
    {
        // cout<<a[i]<<endl;
        printf("%d", a[i]);
    }

    // accessing array element using foreach loop
    for (int i = : a)
    {
        // cout<<i<<endl;
        printf("%d", i);
    }

    // initialization array element using for loop
    for (int i = 0; i < 10; i++)
    {
        // cin>>a[i];
        scanf("%d", a[i]);
    }

    cout << sizeof(a) << endl; // sizeof - size of data
}