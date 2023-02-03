// Depth First Search --> same as preorder traversal of a binary trees
// for a graph various dfs possible depends on order

// dfs define in two terms
// 1. Visted
// 1. Exploring

// for bfs for any graph
// 1. start from any vertex and push that to the stack
// 2. visit it adjacent vertex (any one) so for revisiting adjacent of start index, we are storing to stack
// 3. when you reach any vertex that is completely explored or no any other adjacent vertex then start poping from stack
// 4. explore the remainingg adjacent vertex and as you visit new vertex so again push the popped vertex and when the stack is empty, then dfs ended
// then, the tree formed is called dfs spanning tree
// and vertex that are already explored are connected using dotted lines if it is again an adjacent vertex
// so, it is known as back edges
// Time complexity - O(n)

#include <iostream>
#include <stdio.h>

void DFS(int G[][7], int start, int n)
{
    static int visited[7] = {0};
    int j;
    if (visited[start] == 0)
    {
        printf("%d ", start);
        visited[start] = 1;
        for (j = 1; j < n; j++)
        {
            if (G[start][j] == 1 && visited[j] == 0)
                DFS(G, j, n);
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
    DFS(G, 4, 7);
    return 0;
}