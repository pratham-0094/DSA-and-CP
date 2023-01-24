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

bool isloop(Node *f)
{
    Node *p, *q;
    p = q = f;

    do
    {
        p = p->next;
        q = q->next;

        if (q != NULL)
        {
            q = q->next;
        }
        else
        {
            q = NULL;
        }

        if (p == q)
        {
            return true;
        }
    } while (q && q);
    return false;
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
    if (isloop(first))
    {
        cout << "loop found" << endl;
    }
    else
    {
        cout << "no loop found" << endl;
    }
    return 0;
}