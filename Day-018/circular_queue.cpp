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
    if ((q.rear + 1) % q.size == q.front)
    {
        cout << "queue is full" << endl;
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int value)
{
    if ((q->rear + 1) % q->size == q->front)
        cout << "queue is full, push will not be performed" << endl;
    else
    {
        q->rear = (q->rear + 1) % q->size;
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
        q->front = (q->front + 1) % q->size;
        int x = q->Q[q->front];

        return x;
    }
}

void display(struct queue q)
{
    int i = q.front + 1;
    cout << "displaying queue elements" << endl;
    do
    {

        cout << q.Q[i] << ' ';
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
    cout << endl;
}

int main()
{
    struct queue q;
    printf("Enter size of queue ");
    scanf("%d", &q.size);
    q.Q = new int[q.size];
    q.front = q.rear = 0;

    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);
    cout << "popped element is " << dequeue(&q) << endl;

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