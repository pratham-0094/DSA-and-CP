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

void delete_node(int index)
{
    if (index <= 0)
    {
        Node *p = first;
        first = first->next;

        int x = p->data;
        cout << endl;
        cout << x << " is deleted" << endl;
        cout << endl;

        delete p;
        if (first)
        {
            first->prev = NULL;
        }
    }
    else
    {
        Node *p = first;
        while (index > 0 && p->next)
        {
            p = p->next;
            index--;
        }
        p->prev->next = p->next;
        if (p->next)
        {
            p->next->prev = p->prev;
        }

        int x = p->data;
        cout << endl;
        cout << x << " is deleted" << endl;
        cout << endl;

        delete p;
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

    delete_node(1);
    // if index is greater than list size delete last element
    // if index is negative delete first element

    cout << "displaying element of linked list" << endl;
    display(first);
}