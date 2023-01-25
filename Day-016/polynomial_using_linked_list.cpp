#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

struct Node
{
    int coeff;
    int exp;
    Node *next;
} *poly = NULL, *last = NULL;

double eval(int x)
{
    double sum = 0;
    Node *q = poly;
    while (q != NULL)
    {
        sum += q->coeff * pow(x, q->exp);
        q = q->next;
    }
    return sum;
}

void create(Node *t)
{
    if (poly == NULL)
    {
        poly = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

void display()
{
    Node *p = poly;
    while (p)
    {
        cout << p->coeff << "x" << p->exp;
        p = p->next;
        if (p != NULL)
        {
            cout << " + ";
        }
    }
}

int main()
{
    int length;
    cout << "enter no. of terms" << endl;
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        Node *t = new Node;
        cout << "enter coefficient value" << endl;
        cin >> t->coeff;
        cout << "enter exponent value" << endl;
        cin >> t->exp;
        t->next = NULL;
        create(t);
    }

    cout << "evaluation of polynomial ";
    display();
    cout << " is " << eval(2) << endl;
}