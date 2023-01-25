#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *Head = NULL;

int count(struct Node *p)
{
    int l = 0;
    do
    {
        l++;
        p = p->next;
    } while (p != Head);
    return l;
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    if (index < 0 || index > count(p))
        return;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if (index == 0)
    {
        if (Head == NULL)
        {
            Head = t;
            Head->next = Head;
        }
        else
        {
            while (p->next != Head)
                p = p->next;
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
    cout << endl;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(Head);
    Insert(Head, 0, 5);
    display(Head);
    Insert(Head, 3, 25);
    display(Head);

    return 0;
}