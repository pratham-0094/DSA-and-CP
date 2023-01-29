#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    Node *left = NULL;
    int data;
    Node *right = NULL;
} *root = NULL;

// recursive
Node *insert1(Node *p, int key)
{
    Node *t;
    if (p == NULL)
    {
        t = new Node;
        t->data = key;
        return t;
    }
    if (key > p->data)
    {
        p->right = insert1(p->right, key);
    }
    else
    {
        p->left = insert1(p->left, key);
    }
    return p;
}

// iterative
void insert2(int key)
{
    Node *r = NULL, *p = root;

    if (root == NULL)
    {
        Node *t = new Node;
        t->data = key;
        root = t;
        return;
    }
    while (p)
    {
        r = p;
        if (p->data == key)
        {
            return;
        }
        else if (p->data > key)
        {
            p = p->left;
        }
        else
        {
            p = p->right;
        }
    }

    Node *q = new Node;
    q->data = key;
    if (r->data > key)
    {
        r->left = q;
    }
    else
    {
        r->right = q;
    }
}

int height(Node *p)
{
    int x, y;

    if (p == 0)
        return 0;

    x = height(p->left);
    y = height(p->right);

    if (x > y)
    {
        return x + 1;
    }
    else
    {
        return y + 1;
    }
}

Node *inpre(Node *p)
{
    while (p && p->right)
    {
        p = p->right;
    }
    return p;
}

Node *insuc(Node *p)
{
    while (p && p->left)
    {
        p = p->left;
    }
    return p;
}

Node *delete_node(Node *p, int key)
{
    Node *q;

    if (p == NULL)
    {
        return NULL;
    }

    if (p->left == NULL && p->right == NULL)
    {
        if (p == root)
        {
            root = NULL;
        }
        delete p;
        return NULL;
    }

    if (key < p->data)
    {
        p->left = delete_node(p->left, key);
    }
    else if (key > p->data)
    {
        p->right = delete_node(p->right, key);
    }
    else
    {
        if (height(p->left) > height(p->right))
        {
            q = inpre(p->left);
            p->data = q->data;
            p->left = delete_node(p->left, q->data);
        }
        else
        {
            q = insuc(p->right);
            p->data = q->data;
            p->right = delete_node(p->right, q->data);
        }
    }
    return p;
}

void inorder(Node *p)
{
    if (p)
    {
        inorder(p->left);
        cout << p->data << endl;
        inorder(p->right);
    }
}

int main()
{
    root = insert1(root, 10);
    insert1(root, 20);
    insert1(root, 2);
    insert1(root, 7);
    insert1(root, 30);

    // insert2(4);
    // insert2(10);
    // insert2(20);
    // insert2(5);
    // insert2(8);

    cout << "displaying tree element (inorder)" << endl;
    inorder(root);

    delete_node(root, 30);

    cout << "displaying tree element (inorder)" << endl;
    inorder(root);
}