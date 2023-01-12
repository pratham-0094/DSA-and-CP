#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct user
{
    int serial_no[5];
    int n;
};

// call by value
void area(struct user r)
{
    // accessing array member inside structure
    r.serial_no[0];
    // even the array is not pass by value but as structure is pass by value, so the aray will also pass by value
}

// call by reference
int area(struct Rectangle &r)
{
    r.length++;
    r.breadth++;
    return r.length * r.breadth;
}

// call by address
void change_value(struct Rectangle *r, int new_length, int new_breadth)
{
    r->length = new_length;
    r->breadth = new_breadth;
}

// returned by structure
struct Rectangle *fun()
{
    struct Rectangle *r;
    r = new Rectangle;
    // r=(struct Rectangle *)malloc(sizeof(struct Rectangle))

    // initializing value
    r->length = 10;
    r->breadth = 20;
    return r;
}

int main()
{
    struct Rectangle r = {10, 20};
    int result = area(r);
    cout << result << endl;

    change_value(&r, 2, 9);
    cout << r.length << endl;
    cout << r.breadth << endl;

    // another method
    struct user p = {{1, 2, 3, 4, 5}, 5};

    struct Rectangle *q = fun();
    cout << q->length << endl
         << q->breadth << endl;
}