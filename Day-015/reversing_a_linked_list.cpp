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

void reverse()
{
    // size of linked list
    Node *p = first;
    int i = 0;
    while (p != NULL)
    {
        i++;
        p = p->next;
    }

    if (i != 0)
    {
        p = first;
        int a[i - 1];
        i = 0;

        while (p != NULL)
        {
            a[i] = p->data;
            p = p->next;
            i++;
        }

        p = first;
        i--;

        while (i >= 0)
        {
            p->data = a[i--];
            p = p->next;
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
    Insert(9);
    Insert(10);
    Insert(1);
    Insert(3);
    Insert(12);
    cout << "displaying linked list" << endl;
    display(first);
    reverse();
    cout << "displaying linked list in reverse order" << endl;
    display(first);
    return 0;
}