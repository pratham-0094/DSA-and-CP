#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char name;
};

int main()
{
    struct rectangle r;
    r.length = 10;
    r.breadth = 20;

    // structure pointer
    struct rectangle *p = &r;

    // modifying/initializing data
    (*p).length = 10;
    p->length = 10;

    // accessing data
    cout << r.length * r.breadth << endl;

    // dynamically create stucture
    p = (struct rectangle *)m alloc(sizeof(struct rectangle));
    p = new rectangle; // cpp way
    p->breadth = 20;
}