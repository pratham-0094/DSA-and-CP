#include <iostream>
#include <stdio.h>

using namespace std;

void min_and_max(int A[], int n)
{
    int min = A[0], max = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
            min = A[i];
        else if (A[i] > max)
            max = A[i];
    }

    cout << "Min element is " << min << " and Max element is " << max << endl;
    // Order of n
}

int main()
{
    int n;
    printf("Enter array length ");
    cin >> n;

    // Sum of n natural numbers

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    min_and_max(A, n);
}

// when list is in decreasing order, then it is best case and no.of comparision is (n - 1)
// when list is in increasing order, then it is worst case and no.of comparision is 2 *(n - 1) as it chech if case also
// but both are in Order of n