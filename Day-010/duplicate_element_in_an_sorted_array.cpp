#include <iostream>

using namespace std;

// method - 1
void duplicate_value1(int a[], int n)
{
    int last_duplicate = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != last_duplicate && a[i] == a[i + 1])
        {
            cout << a[i] << endl;
            last_duplicate = a[i];
        }
    }
}

// method - 1
void count_duplicate_value1(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            int j = i + 1;
            while (a[i] == a[j])
                j++;
            cout << a[i] << " appear " << j - i << " times" << endl;
            i = j;
        }
    }
}

// method - 2
// using hashing
void count_duplicate_value2(int a[], int n)
{
    int max = a[n - 1];

    int h[max + 1] = {0};

    // Traversing in array
    for (int i = 0; i < n; i++)
    {
        h[a[i]]++;
    }

    // finding duplicate values
    for (int i = 1; i < max + 1; i++)
    {
        if (h[i] > 1)
            cout << i << " appear " << h[i] << " times" << endl;
    }
}

int main()
{
    int a[] = {3, 4, 5, 5, 5, 5, 6, 7, 7, 7, 7, 8, 9, 11};
    cout << "duplicate value" << endl;
    duplicate_value1(a, 14);

    cout << "duplicate value" << endl;
    count_duplicate_value1(a, 14);

    cout << "duplicate value" << endl;
    count_duplicate_value2(a, 14);
}