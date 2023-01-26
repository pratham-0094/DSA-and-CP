#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
} *top = NULL;

void push(int x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    int x = -1;
    if (top == NULL)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        Node *p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}

int peek(int pos)
{
    Node *p = top;
    for (int i = 0; p && i < pos - 1; i++)
    {
        p = p->next;
    }

    if (p != NULL)
    {
        return p->data;
    }
    return -1;
}

int stackTop()
{
    if (top)
    {
        return top->data;
    }
    return -1;
}

bool isEmpty()
{
    return top ? false : true;
}

bool isFull()
{
    Node *t = new Node;
    int r = t ? false : true;
    free(t);
    return r;
}

int main()
{
    push(1);
    push(24);
    push(3);
    push(12);

    if (isEmpty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    if (isFull())
    {
        cout << "stack is full" << endl;
    }
    else
    {
        cout << "stack is not full" << endl;
    }

    cout << "value at position 3 is " << peek(3) << endl;
    pop();
    cout << "value at top of stack is " << stackTop() << endl;
}