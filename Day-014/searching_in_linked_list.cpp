#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *search1(struct Node *p, int key)
{
    while (p != 0)
    {
        if (p->data == key)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

Node *search2(struct Node *p, int key)
{
    if (p == NULL)
    {
        return NULL;
    }
    if (p->data == key)
    {
        return p;
    }
    return search2(p->next, key);
}

int main()
{
    Node *p = new Node;
    p->data = 10;
    p->next = new Node;
    p->next->data = 20;
    p->next->next = NULL;

    Node *result1 = search1(p, 10);
    if (result1)
    {
        cout << result1->data << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    Node *result2 = search1(p, 0);
    if (result2)
    {
        cout << result2->data << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}