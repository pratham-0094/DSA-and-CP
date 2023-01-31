// Heap --> complete binary tree

// conditions
// 1. if binary tree is represented in array then, there should not be any black space between the elements
// 2. every node should have element greater than or equal to all its descendants, duplicates are allowed --> max heap
// or, every node should have element less than or equal to all its descendants, duplicates are allowed --> min heap

// as it is complete binary tree, height = log(n)
#include <iostream>
#include <stdio.h>

using namespace std;

void insert(int A[], int n)
{
    int temp, i = n;
    temp = A[n];
    while (i > 1 && temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}
// O(log(n))

void create(int A[], int n)
{
    for (int i = 2; i < n; i++)
    {
        insert(A, i);
    }
}

int delete_element(int A[], int n)
{
    int x, i, j, val;
    val = A[1];
    x = A[n];
    A[1] = A[n];
    A[n] = val;
    i = 1;
    j = 2 * i;
    while (j < n - 1)
    {
        if (A[j + 1] > A[j])
            j = j + 1;
        if (A[i] < A[j])
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            i = j;
            j = 2 * j;
        }
        else
            break;
    }
    return val;
}
// O(nlog(n))

void sort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        delete_element(A, n - i);
    }
}

void display(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {0, 10, 20, 30, 25, 5, 40, 35};
    create(A, 8);
    display(A, 8);
    // delete_element(A, 7);
    // delete_element(A, 6);
    sort(A, 8);
    display(A, 8);
}