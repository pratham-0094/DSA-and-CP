#include <iostream>
#include <stdio.h>

using namespace std;

void display(int A[], int n)
{

    printf("array elements are ", n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void reverse1(int A[], int n)
{
    int B[n];
    for (int i = 0; i < n; i++)
    {
        B[i] = A[n - i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        A[i] = B[i];
    }
}

void reverse2(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        swap(A[i], A[n - i - 1]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void shift_left(int A[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    A[i] = 0;
}

void rotate_left(int A[], int n)
{
    int i;
    int x = A[0];
    for (i = 0; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    A[i] = x;
}

void shift_right(int A[], int n)
{
    int i;
    for (i = n - 1; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    A[i] = 0;
}

void rotate_right(int A[], int n)
{
    int i;
    int x = A[n - 1];
    for (i = n - 1; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    A[i] = x;
}

int main()
{
    int n;
    cout << "Enter length of array ";
    cin >> n;
    int A[n];
    printf("Enter array elements (%d elements) ", n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // method - 1
    reverse1(A, n);
    display(A, n);

    // method - 2
    reverse2(A, n);
    display(A, n);

    // left shift
    shift_left(A, n);
    display(A, n);

    // rotate shift
    rotate_left(A, n);
    display(A, n);

    // right shift
    shift_right(A, n);
    display(A, n);

    // rotate right
    rotate_right(A, n);
    display(A, n);
}