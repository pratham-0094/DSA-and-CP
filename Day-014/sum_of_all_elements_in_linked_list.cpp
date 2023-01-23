#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int sum1(struct Node *p)
{
    int sum = 0;
    while (p != 0)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int sum2(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return sum2(p->next) + p->data;
    }
}

int main()
{
    Node *p = new Node;
    p->data = 10;
    p->next = new Node;
    p->next->data = 20;
    p->next->next = NULL;
    cout << "sum of all elements of linked list";
    cout << sum1(p) << endl;
    cout << "sum of all elements of linked list";
    cout << sum2(p) << endl;
}