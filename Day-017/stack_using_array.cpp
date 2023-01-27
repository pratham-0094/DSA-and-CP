#include <iostream>
#include <stdio.h>

using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};

bool isEmpty(struct stack st)
{
    if (st.top == -1)
        return true;
    else
        return false;
}

bool isFull(struct stack st)
{
    if (st.top == st.size - 1)
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

int peek(struct stack st, int pos)
{
    if (st.top - pos + 1 < 0)
    {
        cout << "index invalid" << endl;
        return 0;
    }
    else
        return st.s[st.top - pos + 1];
}

int stackTop(struct stack st)
{
    if (st.top == -1)
        return -1;
    else
        return st.s[st.top];
}

int main()
{
    struct stack st;
    printf("Enter size of stack ");
    scanf("%d", &st.size);
    st.s = new int[st.size];
    st.top = -1;

    push(&st, 10);
    push(&st, 11);
    push(&st, 12);
    push(&st, 13);
    push(&st, 14);
    cout << "popped element is " << pop(&st) << endl;
    cout << "element at 0 " << peek(st, 0) << endl;
    cout << "element at top is " << stackTop(st) << endl;

    if (isEmpty(st))
        cout << "stack is empty\n";
    else
        cout << "stack is not empty\n";

    if (isFull(st))
        cout << "stack is full\n";
    else
        cout << "stack is not full\n";
}