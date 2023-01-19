#include <iostream>

using namespace std;

// method - 1
void count_duplicate_value1(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
            if (count > 1)
            {
                cout << a[i] << " appear " << count << " times" << endl;
            }
        }
    }
}

// method - 2
// using hashing
void count_duplicate_value2(int a[], int n)
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

    // finding duplicate values
    for (int i = 1; i < max + 1; i++)
    {
        if (h[i] > 1)
            cout << i << " appear " << h[i] << " times" << endl;
    }
}

int main()
{
    int a[] = {1, 4, 6, 2, 1, 5, 7, 5, 3, 5, 8, 9};
    cout << "duplicate value" << endl;
    count_duplicate_value1(a, 12);

    int b[] = {1, 4, 6, 2, 1, 5, 7, 5, 3, 5, 8, 9};
    cout << "duplicate value" << endl;
    count_duplicate_value2(b, 12);
}