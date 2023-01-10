#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // pointer are used to store address of data
    // main memory is divided into three part - heap, stack and code
    // one of the main use of pointer is to access the heap memory, accessing resource and passing parameter
    // every type of pointer take same memory size, it is indepent of datatype

    int a = 10;

    // declaration
    int *p;

    // initialization
    p = &a;

    // declarationg + initialization
    int *p = &a;

    // accessing data
    cout << a << endl;
    cout << *p << endl; // derefrencing
    // address of a
    cout << p << endl;
    cout << &a << endl;

    // another method to create pointer
    int *p;
    p = (int *)malloc(5 * sizeof(int)); // malloc return void point so we have to type it to int pointer
    // c way
    p = new int[5]; // cpp way

    // another method
    int b[5] = {10, 20, 30, 40, 50};
    int *p;
    p = &b[0]; // use first index address
    p = b;     // name of the array is itself the address of the array
    // print value
    for (int i = 0; i < 5; i++)
    {
        // cout<<p[i]<<endl;
        printf("%d", p[i]);
    }

    // another mehtod
    int *p;
    p = new int[5];
    // initializing element
    p[0] = 10;
    p[2] = 20;
    delete[] p // release the memory that it allocated dynamically
    // use [] bracket as it is an array
    free(p) // in c
}
