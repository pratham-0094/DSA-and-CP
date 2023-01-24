#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *last = NULL;

void Insert(int x)
{
    struct Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

int main()
{
    Insert(5);
    Insert(9);
    Insert(10);
    cout << "displaying linked list" << endl;
    display(first);
    return 0;
}