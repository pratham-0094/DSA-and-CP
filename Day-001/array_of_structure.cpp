#include <iostream>
#include <stdio.h>

using namespace std;

// structure is used for user define datatype

// structure defining
struct card
{
    int face;
    int shape;
    int color;
}; // size is equal to sum of individual data item it contain

int main()
{
    // array of structure declaration
    struct card deck[52];

    // declaration + initialization
    struct card deck[52] = {{1, 1, 0}, {3, 2, 1}, {4, 1, 0}};

    // accessing particular index structure
    count << deck[0].face << endl;
    count << deck[0].shape << endl;
    count << deck[0].color << endl;
}