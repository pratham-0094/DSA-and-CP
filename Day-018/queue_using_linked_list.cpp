#include <iostream>
#include <stdio.h>

using namespace std;

struct queue
{
    int data;
    queue *next;
} *front = NULL, *rear = NULL;

bool isEmpty()
{
    if (front == NULL)
    {
        cout << "queue is empty" << endl;
        return 1;
    }
    return 0;
}

bool isFull()
{
    queue *t = new queue;
    int r = t ? false : true;
    free(t);
    return r;
}

int first()
{
    if (front != NULL)
        return front->data;
    else
        return -1;
}

int last()
{
    if (rear != NULL)
    {
        return rear->data;
    }
    else
        return -1;
}

void enqueue(int value)
{
    queue *t = new queue;
    if (!t)
    {
        cout << "queue is full, push will not be performed" << endl;
        free(t);
        return;
    }

    t->data = value;
    t->next = NULL;

    if (rear)
    {
        rear->next = t;
        rear = t;
    }
    else
    {
        front = rear = t;
    }
}

int dequeue()
{
    if (front == NULL)
    {
        cout << "queue is empty, pop will not be performed" << endl;
        return -1;
    }
    else
    {
        queue *p = front;
        int x = front->data;
        front = front->next;
        free(p);
        return x;
    }
}

void display()
{
    int i;
    cout << "displaying queue elements" << endl;

    while (front != NULL)
    {
        cout << front->data << ' ';
        front = front->next;
    }
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    cout << "popped element is " << dequeue() << endl;
    cout << "element at front is " << first() << endl;
    cout << "element at rear is " << last() << endl;

    if (isEmpty())
        cout << "queue is empty\n";
    else
        cout << "queue is not empty\n";

    if (isFull())
        cout << "queue is full\n";
    else
        cout << "queue is not full\n";

    display();
}