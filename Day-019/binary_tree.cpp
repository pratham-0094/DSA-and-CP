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

void preorder(struct Node *p)
{
    if (p)
    {
        printf("%d\n", p->data);
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder(struct Node *p)
{
    if (p)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d\n", p->data);
    }
}

void inorder(struct Node *p)
{
    if (p)
    {
        inorder(p->left);
        printf("%d\n", p->data);
        inorder(p->right);
    }
}

int count(Node *p)
{
    if (p)
        return count(p->left) + count(p->right) + 1;
    return 0;
}

int height(Node *p)
{
    int x, y;
    x = y = -1;

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

int deg2, deg1, deg0, notleaf;

void degree(Node *p)
{
    if (!p)
        return;

    if (!p->left && !p->right)
    {
        deg0++;
    }

    if (p->left && p->right)
    {
        deg2++;
    }

    if (p->left || p->right)
    {
        notleaf++;
    }

    if ((!p->left && p->right) || (p->left && !p->right))
    {
        deg1++;
    }

    degree(p->left);
    degree(p->right);
}

void level_order(Node *p, struct queue *q)
{
    if (p == NULL)
        return;

    cout << p->data;
    enqueue(q, p);

    while (!isEmpty(q))
    {
        p = dequeue(q);
        if (p->left)
        {
            cout << p->left->data;
            enqueue(q, p->left);
        }
        if (p->right)
        {
            cout << p->right->data;
            enqueue(q, p->right);
        }
    }
}

int main()
{
    deg2 = deg1 = deg0 = notleaf = 0;
    struct queue q;
    create(&q, 100);
    preorder(root);
    cout << "count of nodes " << count(root) << endl;
    cout << "height of tree " << height(root) << endl;
    degree(root);
    cout << "no. of node with degree 0 " << deg0 << endl;
    cout << "no. of node with degree 1 " << deg1 << endl;
    cout << "no. of node with degree 2 " << deg2 << endl;
    cout << "internal nodes " << notleaf << endl;
    cout << "level order traversal" << endl;
    level_order(root, &q);
}