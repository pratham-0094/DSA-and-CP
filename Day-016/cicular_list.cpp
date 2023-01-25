// Circular List --> the last node point to first. so the first node called as head

#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *Head;

void display1(struct Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
    cout << endl;
}

void display2(struct Node *p)
{
    static int flag = 0;
    if (p != Head || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        display2(p->next);
    }
    flag = 0;
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

int main()
{

    int A[] = {3, 5, 7, 9, 12, 15, 17};
    create(A, 7);

    cout << "elements are" << endl;
    display1(Head);

    cout << "elements are" << endl;
    display2(Head);
}