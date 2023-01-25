#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
} *first = NULL;

void create(int a[], int n)
{
    Node *t, *last;
    int i;

    first = new Node;
    first->data = a[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void insert(int index, int value)
{
    Node *t = new Node;
    t->data = value;

    if (index <= 0)
    {
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        Node *p = first;
        while (index - 1 > 0 && p->next)
        {
            p = p->next;
            index--;
        }
        t->next = p->next;
        t->prev = p;
        if (p->next)
        {
            p->next->prev = t;
        }
        p->next = t;
    }
}

void display(Node *p)
{
    while (p)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

int main()
{
    // benefit of using doubly list is we can access it in either direction
    int a[] = {10, 20, 30, 40, 50};
    create(a, 5);

    cout << "displaying element of linked list" << endl;
    display(first);

    insert(6, 5);
    insert(0, 5);
    // if index is greater than list size insert at last
    // if index is negative insert at first

    cout << "displaying element of linked list" << endl;
    display(first);
}