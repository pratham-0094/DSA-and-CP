#include <iostream>

using namespace std;

int Max(int A[], int n)
{
    int max = -32768;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

// this is index based sorting
// here we have to take an array of size equal to largest element and initialize the list with 0, so it consumed lots of memory
// time complexity = O(n)
// space complexity = O(n) according to the largest element
void CountSort(int A[], int n)
{
    int max = Max(A, n);

    // Create count array
    int *count = new int[max + 1];

    // Initialize count array with 0
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Update count array values based on A values
    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }

    // Update A with sorted elements
    int i = 0;
    int j = 0;
    while (j < max + 1)
    {
        if (count[j] > 0)
        {
            A[i++] = j;
            count[j]--;
        }
        else
        {
            j++;
        }
    }

    // Delete heap memory
    delete[] count;
}

int main()
{
    int A[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int n = sizeof(A) / sizeof(A[0]);

    CountSort(A, n);
    cout << "displaying array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}