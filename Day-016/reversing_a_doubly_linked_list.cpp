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

void reverse()
{
    Node *p = first, *temp;
    while (p)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        if (p->prev == NULL)
        {
            first = p;
        }
        p = p->prev;
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

    reverse();

    cout << "displaying linked list in reverse order" << endl;
    display(first);
}