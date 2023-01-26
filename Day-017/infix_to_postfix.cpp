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
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '(' || x == ')' || x == '^')
    {
        return 0;
    }
    return 1;
}

int OutPrecedence(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 3;
    }
    else if (x == '^')
    {
        return 6;
    }
    else if (x == '(')
    {
        return 7;
    }
    else if (x == ')')
    {
        return 0;
    }
    return -2;
}

int inPrecedence(char x)
{
    if (x == '+' || x == '-')
    {
        return 2;
    }
    else if (x == '*' || x == '/')
    {
        return 4;
    }
    else if (x == '^')
    {
        return 5;
    }
    else if (x == '(')
    {
        return 0;
    }
    else if (x == ')')
    {
        return -1;
    }
    return -2;
}

char *convert(char *infix)
{
    int i, j;
    char *postfix = new char(strlen(infix) + 1);
    i = j = 0;
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (OutPrecedence(infix[i]) == inPrecedence(StackTop()))
            {
                int x = pop();
                i++;
            }
            if (OutPrecedence(infix[i]) > inPrecedence(StackTop()))
            {
                if (!OutPrecedence(infix[i]))
                {
                    postfix[j++] = pop();
                }
                else
                {
                    push(infix[i++]);
                }
            }
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (top != NULL)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a+b*c-d/e";
    char *postfix = convert(infix);
    printf("postfix of expression %s is %s \n", infix, postfix);

    infix = "((a+b)*c)-d^e^f";
    postfix = convert(infix);
    printf("postfix of expression %s is %s \n", infix, postfix);
}