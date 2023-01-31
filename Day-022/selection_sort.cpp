#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// no. of pass = n-1
// no. of comparsion = n(n-1)/2 = O(n^2)
// no. of swap = n(n-1)/2 = O(n^2)
// comparsion range = O(n^2) - O(n)
// swaping range = O(n^2) - O(1)
// in selection sort intermediate result is useful, as after k passes we get k sorted element
// selection sort is not adaptive
// selection sort is not stable
void selection(int a[], int n)
{
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        swap(&a[i], &a[k]);
    }
}

int main()
{
    int a[] = {3, 7, 9, 10, 6, 5, 19, 12, 2, 8};
    int n = 10;

    selection(a, n);

    cout << "displaying sorted list" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}