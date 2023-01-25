#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first;

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

int mid(struct Node *p)
{
    struct Node *q = p;
    struct Node *r = p;
    while (q)
    {
        q = q->next;
        if (q)
            q = q->next;
        if (q)
            r = r->next;
    }
    return r->data;
}

int main()
{
    int A[] = {3, 5, 7, 9, 12, 15, 17};
    create(A, 7);

    cout << "middle elements is " << mid(first);
}
