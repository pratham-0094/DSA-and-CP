#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void display1(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

void display2(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data << endl;
        display2(p->next);
    }
}

int main()
{
    Node *p = new Node;
    p->data = 10;
    p->next = new Node;
    p->next->data = 20;
    p->next->next = NULL;

    cout << "elements are" << endl;
    display1(p);

    cout << "elements are" << endl;
    display2(p);
}