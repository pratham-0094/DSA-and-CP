#include <iostream>

using namespace std;

// structure is used for user define datatype

// structure defining
struct Card
{
    int face;
    int shape;
    int color;
}; // size is equal to sum of individual data item it contain

int main()
{
    // array of structure declaration
    struct Card deck1[52];

    // declaration + initialization
    struct Card deck2[52] = {{1, 1, 0}, {3, 2, 1}, {4, 1, 0}};

    // accessing particular index structure
    cout << deck2[0].face << endl;
    cout << deck2[0].shape << endl;
    cout << deck2[0].color << endl;
}