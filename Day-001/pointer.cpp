#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // pointer are used to store address of data
    // main memory is divided into three part - heap, stack and code
    // one of the main use of pointer is to access the heap memory, accessing resource and passing parameter
    // every type of pointer take same memory size, it is indepent of datatype (8bytes)

    int a = 10;

    // declaration
    int *p;

    // initialization
    p = &a;

    // declarationg + initialization
    int *p1 = &a;

    // accessing data
    cout << a << endl;
    cout << *p << endl; // derefrencing
    // address of a
    cout << p << endl;
    cout << &a << endl;

    // another method to create pointer
    int *q;
    q = (int *)malloc(5 * sizeof(int)); // malloc return void point so we have to type it to int pointer
    // c way
    q = new int[5]; // cpp way

    // another method
    int b[5] = {10, 20, 30, 40, 50};
    int *r;
    r = &b[0]; // use first index address
    r = b;     // name of the array is itself the address of the array
    // print value
    for (int i = 0; i < 5; i++)
    {
        // cout<<r[i]<<endl;
        printf("%d", r[i]);
    }

    // another mehtod
    int *s;
    s = new int[5];
    // initializing element
    s[0] = 10;
    s[2] = 20;
    delete[] s; // release the memory that it allocated dynamically
    // use [] bracket as it is an array
    free(s); // in c
}
