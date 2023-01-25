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

int delete_node(struct Node *p, int index)
{
    int x;
    if (index < 0 || index > count(Head))
        return -1;
    if (index == 1)
    {
        while (p->next != Head)
            p = p->next;
        x = p->data;
        if (Head == p)
        {
            free(Head);
            Head = NULL;
        }
        else
        {

            p->next = Head->next;
            free(Head);
            Head = p->next;
        }
    }
    else
    {
        struct Node *q = NULL;
        for (int i = 0; i < index - 2; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
    return x;
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

    delete_node(Head, 1);
    display(Head);

    return 0;
}