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
// in bubble sort intermediate result is useful, as after k passes we get k sorted element
// bubble sort is adaptive as if list is sorted then we the help of flag we stop the sorting process
// bubble sort is stable as if list have duplicate element then swaping not apply as it preserved
void bubble(int a[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                flag = 1;
                swap(&a[j], &a[j + 1]);
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int a[] = {3, 7, 9, 10, 6, 5, 19, 12, 2, 8};
    int n = 10;

    bubble(a, n);

    cout << "displaying sorted list" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}