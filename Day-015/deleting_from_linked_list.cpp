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
    }
    else
    {
        Node *p = first, *q = NULL;
        while (index > 0 && p->next != NULL)
        {
            q = p;
            p = p->next;
            index--;
        }
        q->next = p->next;
        int x = p->data;
        cout << endl;
        cout << x << " is deleted" << endl;
        cout << endl;
        delete p;
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
    delete_node(2);
    // if index is greater than list size delete the last element
    // if index is negative delete the first element
    cout << "displaying linked list" << endl;
    display(first);
    return 0;
}