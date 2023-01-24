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

void delete_duplicate()
{
    Node *p = first;
    Node *q = first->next;

    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
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
    Insert(5);
    Insert(10);
    Insert(12);
    Insert(17);
    Insert(17);
    Insert(17);
    Insert(20);
    cout << "displaying linked list" << endl;
    display(first);
    delete_duplicate();
    cout << "displaying linked list" << endl;
    display(first);
    return 0;
}