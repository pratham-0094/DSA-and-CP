#include <iostream>

using namespace std;

// structure is used for user define datatype

// structure defining
struct Rectangle
{
    int length;
    int breadth;
    char name;
}; // size is equal to sum of individual data item it contain

int main()
{
    // structure declaration
    struct Rectangle r1; 
    // in cpp writing struct in not necessary
    Rectangle r2;

    //  declaring multiple structure
    struct Rectangle r3, r4, r5;

    //  initialization
    r1.length = 10;
    r1.breadth = 20;

    // declaration + initialization
    struct Rectangle r6 = {10, 20};

    // accessing data
    cout << r6.length * r6.breadth << endl;

    cout << sizeof(r6) << endl; // sizeof - size of data
    // size of structure is 4 + 4 + 1 = 9 but it take 12 memory space as it is east for the machine to read 4 byte at a time this adjustment in the memory is called scarless padding
}