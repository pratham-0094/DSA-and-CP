#include <iostream>
#include <stdio.h>

using namespace std;

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

bool isEmpty(struct queue q)
{
    if (q.front == q.rear)
    {
        cout << "queue is empty" << endl;
        return 1;
    }
    return 0;
}

bool isFull(struct queue q)
{
    if (q.rear == q.size - 1)
    {
        cout << "queue is full" << endl;
        return 1;
    }
    return 0;
}

int first(struct queue q)
{
    if (q.front + 1 <= q.rear)
        return q.Q[q.front + 1];
    else
        return -1;
}

int last(struct queue q)
{
    if (q.rear > q.front && q.rear < q.size)
    {
        return q.Q[q.rear];
    }
    else
        return -1;
}

void enqueue(struct queue *q, int value)
{
    if (q->rear == q->size - 1)
        cout << "queue is full, push will not be performed" << endl;
    else
    {
        q->rear++;
        q->Q[q->rear] = value;
    }
}

int dequeue(struct queue *q)
{
    if (q->front == q->rear)
    {
        cout << "queue is empty, pop will not be performed" << endl;
        return -1;
    }
    else
    {
        q->front++;
        int x = q->Q[q->front];

        // pointer resetting
        if (q->front == q->rear)
        {
            q->front = q->rear = -1;
        }

        return x;
    }
}

void display(struct queue q)
{
    int i;
    cout << "displaying queue elements" << endl;

    for (i = q.front + 1; i <= q.rear; i++)
    {
        cout << q.Q[i] << ' ';
    }
    cout << endl;
}

int main()
{
    struct queue q;
    printf("Enter size of queue ");
    scanf("%d", &q.size);
    q.Q = new int[q.size];
    q.front = q.rear = -1;

    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);
    cout << "popped element is " << dequeue(&q) << endl;
    cout << "element at front is " << first(q) << endl;
    cout << "element at rear is " << last(q) << endl;

    if (isEmpty(q))
        cout << "queue is empty\n";
    else
        cout << "queue is not empty\n";

    if (isFull(q))
        cout << "queue is full\n";
    else
        cout << "queue is not full\n";

    display(q);
}