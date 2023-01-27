#include <iostream>
#include <stdio.h>

using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};

bool isEmpty(struct stack *st)
{
    if (st->top == -1)
        return true;
    else
        return false;
}

void push(struct stack *st, int value)
{
    if (st->top == st->size - 1)
        cout << "stack is full, push will not be performed" << endl;
    else
    {
        st->top++;
        st->s[st->top] = value;
    }
}

int pop(struct stack *st)
{
    if (st->top == -1)
    {
        cout << "stack is empty, pop will not be performed" << endl;
        return -1;
    }
    else
        return st->s[st->top--];
}

void enqueue(struct stack *st1, struct stack *st2, int value)
{
    push(st1, value);
}

int dequeue(struct stack *st1, struct stack *st2)
{
    int x = -1;

    if (isEmpty(st2))
    {
        if (isEmpty(st1))
        {
            cout << "queue is empty" << endl;
            return x;
        }
        else
        {
            while (!isEmpty(st1))
            {
                push(st2, pop(st1));
            }
        }
    }
    return pop(st2);
}

void display(struct stack st1, struct stack st2)
{
    int i = 0;
    cout << "displaying queue element" << endl;

    while (!isEmpty(&st1))
    {
        push(&st2, pop(&st1));
    }

    while (!isEmpty(&st2))
    {
        cout << pop(&st2) << ' ';
    }
    cout << endl;
}

int main()
{
    struct stack st1, st2;
    st1.size = 10;
    st1.s = new int[st1.size];
    st2.size = 10;
    st2.s = new int[st2.size];
    st1.top = st2.top = -1;

    enqueue(&st1, &st2, 10);
    enqueue(&st1, &st2, 11);
    enqueue(&st1, &st2, 12);
    enqueue(&st1, &st2, 13);
    enqueue(&st1, &st2, 14);
    enqueue(&st1, &st2, 15);
    cout << "popped element is " << dequeue(&st1, &st2) << endl;

    display(st1, st2);
}