#include <iostream>
#include <stdio.h>
#define MIN_INT INT32_MIN;

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

int max(Node *p)
{
    int m = MIN_INT;
    while (p)
    {
        if (p->data > m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

// using recursion
int Rmax(Node *p)
{
    int x = 0;
    if (p == NULL)
    {
        return MIN_INT;
    }
    else
    {
        x = max(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;

        // return x > p->data ? x : p->data;
        // we can use ternary operator
    }
}

int main()
{

    int A[] = {3, 5, 7, 9, 12, 15, 17};
    create(A, 7);

    printf("Max is %d\n", max(first));
}