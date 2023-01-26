#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    struct Node *t;
    char x = -1;
    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int StackTop()
{
    if (top != NULL)
    {
        return top->data;
    }
    return -1;
}

int isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 0;
    }
    return 1;
}

int eval(char *postfix)
{
    int i, x, y, result;

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isOperand(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {
            y = pop();
            x = pop();
            switch (postfix[i])
            {
            case '+':
                result = x + y;
                push(result);
                break;
            case '-':
                result = x - y;
                push(result);
                break;
            case '*':
                result = x * y;
                push(result);
                break;
            case '/':
                result = x / y;
                push(result);
                break;
            }
        }
    }
    return pop();
}

int main()
{
    char *postfix = "35*62/+4-";
    printf("evaluation of expression %s is %d", postfix, eval(postfix));
}