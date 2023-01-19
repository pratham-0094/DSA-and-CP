#include <stdio.h>
#include <iostream>

using namespace std;

// method - 1
void missing_value1(int a[], int n)
{
    int max = a[0];

    // finding max value
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    int h[max + 1] = {0};

    // Traversing in array
    for (int i = 0; i < n; i++)
    {
        h[a[i]]++;
    }

    // finding missing values
    for (int i = 1; i < max + 1; i++)
    {
        if (h[i] == 0)
            printf("%d\n", i);
    }
}

int main()
{
    int a[] = {2, 3, 5, 4, 1, 6, 9, 10};
    cout << "missing value" << endl;
    missing_value1(a, 8);
}