#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Node *first = (struct Node *)malloc(sizeof(struct Node));
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

    return first;
}

void concatenate(Node *p, Node *q)
{
    // go to the last node of first linked list
    while (p->next != NULL)
    {
        p = p->next;
    }

    // point the last node to the second linked list
    p->next = q;

    // delete second linked list
    q = NULL;
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
    int A[] = {10, 20, 30, 40, 50};
    Node *p = create(A, 5);
    cout << "displaying 1st linked list" << endl;
    display(p);
    int B[] = {10, 20, 30, 40, 50};
    Node *q = create(B, 5);
    cout << "displaying 2nd linked list" << endl;
    display(q);
    concatenate(p, q);
    cout << "displaying linked list after concatenating" << endl;
    display(p);
    return 0;
}