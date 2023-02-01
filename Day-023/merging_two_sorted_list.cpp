#include <iostream>
#include <stdio.h>

using namespace std;

// merge two sorted list
int *merge1(int a[], int b[], int m, int n)
{
    int i, j, k;
    i = j = k = 0;
    int *c = new int[m + n];

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    for (; i < m; i++)
    {
        c[k++] = a[i];
    }

    for (; j < n; j++)
    {
        c[k++] = b[j];
    }

    return c;
}

// merge two list present in single list
void merge2(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];

    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];

    for (i = l; i <= h; i++)
        A[i] = B[i];
}

// merging multiple list at same iteration is called m-way merging
int main()
{
    int a[] = {1, 5, 7, 9};
    int b[] = {2, 4, 6, 8};

    int *c = merge1(a, b, 4, 4);
    cout << "displaying array element" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    int d[] = {2, 4, 6, 8, 1, 5, 7, 9};

    merge2(d, 0, 3, 7);
    cout << "displaying array element" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
}