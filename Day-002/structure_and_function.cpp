#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// this is the highest level of programming in c where we define structure and the function dependent on that structure
// beacuase grouping of data at one place is structure
// grouping the instruction for performing the task is a function
void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

void change_value(struct Rectangle *r, int new_l, int new_b)
{
    r->length = new_l;
    r->breadth = new_b;
}

int main()
{
    struct Rectangle r;
    initialize(&r, 10, 5);
    cout << area(r) << endl;
    change_value(&r, 15, 25);
}