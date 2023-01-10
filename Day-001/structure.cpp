#include <iostream>
#include <stdio.h>

using namespace std;

// structure is used for user define datatype

// structure defining
struct rectangle
{
    int length;
    int breadth;
    char name;
}; // size is equal to sum of individual data item it contain

int main()
{
    // structure declaration
    struct rectangle r;

    //  declaring multiple structure
    struct rectangle r1, r2, r3;

    //  initialization
    r.length = 10;
    r.breadth = 20;

    // declaration + initialization
    struct rectangle r = {10, 20};

    // accessing data
    cout << r.length * r.breadth << endl;

    cout << sizeof(a) << endl; // sizeof - size of data
    // size of structure is 4 + 4 + 1 = 9 but it take 12 memory space as it is east for the machine to read 4 byte at a time this adjustment in the memory is called scarless padding
}