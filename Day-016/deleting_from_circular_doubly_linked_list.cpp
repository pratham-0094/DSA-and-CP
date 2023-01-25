#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
} *head = NULL;

void create(int a[], int n)
{
    Node *t, *last;
    int i;

    head = new Node;
    head->data = a[0];
    head->prev = head->next = head;
    last = head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
    head->prev = last;
}

void delete_node(int index)
{
    if (index <= 0)
    {
        Node *p = head;
        head = head->next;

        int x = p->data;
        cout << endl;
        cout << x << " is deleted" << endl;
        cout << endl;

        head->prev = p->prev;
        p->prev->next = p->next;

        delete p;
    }
    else
    {
        Node *p = head;
        while (index > 0)
        {
            p = p->next;
            index--;
        }
        p->prev->next = p->next;
        p->next->prev = p->prev;

        int x = p->data;
        cout << endl;
        cout << x << " is deleted" << endl;
        cout << endl;

        delete p;
    }
}

void display()
{
    Node *p = head;
    do
    {
        cout << p->data << endl;
        p = p->next;
    } while (p != head);
}

int main()
{
    // benefit of using doubly list is we can access it in either direction
    int a[] = {10, 20, 30, 40, 50};
    create(a, 5);

    cout << "displaying element of linked list" << endl;
    display();

    delete_node(0);
    // if index is greater than list size delete last element
    // if index is negative delete first element

    cout << "displaying element of linked list" << endl;
    display();
}