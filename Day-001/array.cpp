#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // array - collection of homogenous datatype stored in contigious manner

    // array declaration
    int a1[10]; // default value garbage

    // initializing value
    a1[0] = 47;
    a1[1] = 26;
    a1[2] = 19;

    // declaration + initialization
    int a2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // if array size is n but we not initialize all of them then they have default value of 0
    int a3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   // automatically take size

    // variable-sized array
    int n = 4;
    int b[n]; // it cannot be initialized

    // accessing element at particular index
    cout << a2[3] << endl;

    // accessing array element using for loop
    for (int i = 0; i < 10; i++)
    {
        // cout<<a2[i]<<endl;
        printf("%d", a2[i]);
    }

    // accessing array element using foreach loop
    for (int i : a2)
    {
        // cout<<i<<endl;
        printf("%d", i);
    }

    // initialization array element using for loop
    for (int i = 0; i < 10; i++)
    {
        // cin>>a3[i];
        scanf("%d", a3[i]);
    }

    cout << sizeof(a3) << endl; // sizeof - size of data
}