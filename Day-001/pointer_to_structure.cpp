#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char name;
};

int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 20;

    // structure pointer
    struct Rectangle *p = &r;

    // accessing data
    cout << r.length * r.breadth << endl;

    // modifying/initializing data
    (*p).length = 10;
    p->length = 10;

    // dynamically create stucture
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p = new Rectangle; // cpp way
    p->breadth = 20;
}