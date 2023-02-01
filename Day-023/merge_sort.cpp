#include <iostream>
#include <stdio.h>

using namespace std;

void Merge(int A[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int B[high + 1];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }
    while (i <= mid)
    {
        B[k++] = A[i++];
    }
    while (j <= high)
    {
        B[k++] = A[j++];
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

// complexity best case = O(nlog(n))
// in merge sort we partition list and merge them
void IterativeMergeSort(int A[], int n)
{
    int p;
    for (p = 2; p <= n; p = p * 2)
    {
        for (int i = 0; i + p - 1 < n; i = i + p)
        {
            int low = i;
            int high = i + p - 1;
            int mid = (low + high) / 2;
            Merge(A, low, mid, high);
        }
    }
    if (p / 2 < n)
    {
        Merge(A, 0, p / 2 - 1, n - 1);
    }
}

void RecursiveMergeSort(int A[], int low, int high)
{
    if (low < high)
    {
        // Calculate mid point
        int mid = low + (high - low) / 2;

        // Sort sub-lists
        RecursiveMergeSort(A, low, mid);
        RecursiveMergeSort(A, mid + 1, high);

        // Merge sorted sub-lists
        Merge(A, low, mid, high);
    }
}

int main()
{
    int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int n = sizeof(A) / sizeof(A[0]);

    IterativeMergeSort(A, n);
    cout << "displaying array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    int B[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int m = sizeof(B) / sizeof(B[0]);

    RecursiveMergeSort(B, 0, 7);
    cout << "displaying array element" << endl;
    for (int i = 0; i < m; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}