// we know that we can improve linear seacrh
// 1. Transposition
// 2. Move to Head

#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

Node *search(Node *p, int key)
{
    Node *q;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
        }

        q = p;
        p = p->next;
    }
    return first;
}

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

int main()
{

    int A[] = {3, 5, 7, 9, 12, 15, 17};
    create(A, 7);

    struct Node *temp = search(first, 1);
    if (temp)
        cout << "Key is found" << endl;
    else
        cout << "Key not found" << endl;
}