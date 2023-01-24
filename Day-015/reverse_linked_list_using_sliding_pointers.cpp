#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void reverse_using_recursion(struct Node *q, struct Node *p)
{
    if (p)
    {
        reverse_using_recursion(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

void reverse(struct Node *t)
{
    struct Node *p = first, *q = NULL, *r = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(first);
    reverse(first);
    display(first);
    reverse_using_recursion(NULL, first);
    display(first);
    return 0;
}
