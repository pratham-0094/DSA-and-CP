#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int count1(struct Node *p)
{
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
}

int count2(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return count2(p->next) + 1;
    }
}

int main()
{
    Node *p = new Node;
    p->data = 10;
    p->next = new Node;
    p->next->data = 20;
    p->next->next = NULL;

    cout << "number of elements";
    cout << count1(p) << endl;

    cout << "number of elements";
    cout << count2(p) << endl;
}