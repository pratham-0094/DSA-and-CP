#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// quick sort work in idea that an element is at sorted position
// if elements before that element are smaller, all elements after that element are greater
// quick sort uses partition procedure
// complexity best case = O(nlog(n)), if partitioning in middle
// if already descending or ascending then complexity =  O(n^2), if partitioning in any end
// if inplace of first element, we select any random element then it is called, randomize quick sort
// in selection sort we find suitable element for the particular index
// in quick sort we find suitable index for the particular element
int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)

            swap(a[i], a[j]);

    } while (i < j);

    swap(a[l], a[j]);
    return j;
}

void quickSort(int a[], int l, int h)
{
    if (l < h)
    {
        int j = partition(a, l, h);
        quickSort(a, l, j);
        quickSort(a, j + 1, h);
    }
}

int main()
{
    int a[] = {3, 7, 9, 10, 6, 5, 19, 12, 2, 8, INT32_MAX}, n = 11;

    quickSort(a, 0, n - 1);

    cout << "displaying sorted list" << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << ' ';
    }
}