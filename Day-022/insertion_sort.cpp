#include <iostream>
#include <stdio.h>

using namespace std;

// no. of pass = n-1
// no. of comparsion = n(n-1)/2 = O(n^2)
// no. of swap = n(n-1)/2 = O(n^2)
// comparsion range = O(n^2) - O(n)
// swaping range = O(n^2) - O(1)
// in insertion sort intermediate result is not useful
// benefit of insertion sort over linked list that we don't have to shift the element, so it is more compatible with linked list than array
// insertion sort is adaptive as if list is sorted no. of swaping / comparsion decreased, we don't use any flag so it is adaptive by nature
// insertion sort is stable as if list have duplicate element then swaping not apply as it preserved
void insertion(int a[], int n)
{
    int x;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        x = a[i];

        while (j > -1 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

int main()
{
    int a[] = {3, 7, 9, 10, 6, 5, 19, 12, 2, 8};
    int n = 10;

    insertion(a, n);

    cout << "displaying sorted list" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}