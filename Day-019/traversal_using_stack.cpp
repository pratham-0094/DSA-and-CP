
#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    struct Node *left = NULL;
    int data;
    struct Node *right = NULL;
} *root = NULL;

struct stack
{
    int size;
    int top;
    Node *s[];
};

void push(struct stack *st, Node *value)
{
    if (st->top == st->size - 1)
        cout << "stack is full, push will not be performed" << endl;
    else
    {
        st->top++;
        st->s[st->top] = value;
    }
}

Node *pop(struct stack *st)
{
    if (st->top == -1)
    {
        cout << "stack is empty, pop will not be performed" << endl;
        return NULL;
    }
    else
        return st->s[st->top--];
}

bool isEmpty(struct stack *st)
{
    if (st->top == -1)
        return true;
    else
        return false;
}

void preorder(Node *t, struct stack *st)
{
    while (t != NULL || !isEmpty(st))
    {
        if (t != NULL)
        {
            cout << t->data;
            push(st, t);
            t = t->left;
        }
        else
        {
            t = pop(st);
            t = t->right;
        }
    }
}

// 12

void inorder(Node *t, struct stack *st)
{
    while (t != NULL || !isEmpty(st))
    {
        if (t != NULL)
        {
            push(st, t);
            t = t->left;
        }
        else
        {
            t = pop(st);
            cout << t->data;
            t = t->right;
        }
    }
}

int main()
{
    struct stack st;
    st.top = -1;
    st.size = 100;

    root = new Node;
    root->data = 1;
    root->left = new Node;
    root->left->data = 2;
    root->right = new Node;
    root->right->data = 3;

    preorder(root, &st);
    cout << endl;
    inorder(root, &st);
}