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

void display(Node *p)
{
    while (p)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

int length(Node *p)
{
    int length = 0;
    while (p)
    {
        p = p->next;
        length++;
    }
    return length;
}

int main()
{
    // benefit of using doubly list is we can access it in either direction
    int a[] = {10, 20, 30, 40, 50};
    create(a, 5);

    cout << "length of linked list is " << length(first) << endl;

    cout << "displaying element of linked list" << endl;
    display(first);
}