// searching is based on height of binary tree
// O(h) where h, log(n) <= h <= n
#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    struct Node *left = NULL;
    int data;
    struct Node *right = NULL;
} *root = NULL;

struct queue
{
    int size;
    int front;
    int rear;
    Node *Q[];
};

void enqueue(struct queue *q, Node *value)
{
    if ((q->rear + 1) % q->size == q->front)
        cout << "queue is full, push will not be performed" << endl;
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = value;
    }
}

Node *dequeue(struct queue *q)
{
    Node *x = NULL;

    if (q->front == q->rear)
    {
        cout << "queue is empty, pop will not be performed" << endl;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

bool isEmpty(struct queue *q)
{
    return q->front == q->rear;
}

void create(struct queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    Node *p, *t;
    int x;
    printf("Enter root value\n");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->left = root->right = 0;
    enqueue(q, root);

    while (!isEmpty(q))
    {
        p = dequeue(q);
        printf("Enter left child of %d\n", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->left = t->right = 0;
            p->left = t;
            enqueue(q, t);
        }
        printf("Enter right child of %d\n", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->left = t->right = 0;
            p->right = t;
            enqueue(q, t);
        }
    }
}

Node *RSearch(Node *t, int key)
{
    if (t == NULL)
        return NULL;

    if (key == t->data)
        return t;

    else if (key < t->data)
        return RSearch(t->left, key);

    else
        return RSearch(t->right, key);
}

Node *search(Node *t, int key)
{
    while (t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->left;

        else
            t = t->right;
    }
    return NULL;
}

int main()
{
    struct queue q;
    create(&q, 100);
    Node *res = RSearch(root, 5);
    if (res)
        cout << "Result = " << res->data << endl;
    res = search(root, 5);
    if (res)
        cout << "Result = " << res->data << endl;
    free(res);
}
