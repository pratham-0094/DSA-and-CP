// Breadth First Search --> same as level order of a binary tree
// objective of bfs is to visit all adjacent vertex / nodes (order not important)
// for a graph various bfs possible depends on order
// bfs says that you can start from any vertex
// when you visit vertex you should explore the vertex completely (visit all adjacent verteces)

// bfs define in two terms
// 1. Visting - visit the vertex
// 1. Exploration - visit all its adjacent vertex

// for bfs for any graph
// 1. start from any vertex and push that to queue
// 2. pop vertex from queue and push all adjacent vertex to queue
// 3. again, pop (first adjacent) vertex and push its adjacent vertx
// 4. when queue become empty, bfs ends
// then, the tree formed is called bfs spanning tree
// and vertex that are already explored are connected using dotted lines if it is again an adjacent vertex
// so, it is known as cross edges
// Time complexity - O(n^2)

#include <iostream>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
        printf("Queue is FUll\n");
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct Node *t;
    if (front == NULL)
        printf("Queue is Empty\n");
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

int isEmpty()
{
    return front == NULL;
}

void BFS(int G[][7], int start, int n)
{
    int i = start, j;
    int visited[7] = {0};
    printf("%d ", i);
    visited[i] = 1;
    enqueue(i);
    while (!isEmpty())
    {
        i = dequeue();
        for (j = 1; j < n; j++)
        {
            if (G[i][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
}

int main()
{
    int G[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};
    BFS(G, 4, 7);
    return 0;
}