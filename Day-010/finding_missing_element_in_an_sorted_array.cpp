#include <iostream>

using namespace std;

// method - 1
// starting from 1
int missing_value1(int a[], int length)
{
    int sum = 0;
    int s = a[length - 1] * (a[length - 1] + 1) / 2;
    for (int i = 0; i < length; i++)
    {
        sum += a[i];
    }
    return s - sum;
}

// method - 2
// starting from any value
int missing_value2(int a[], int length)
{
    int diff = a[0];
    for (int i = 0; i < length; i++)
    {
        if (a[i] - i != diff)
            return i + diff;
    }
    return -1;
}

// multiple missing value
// method - 1
// starting from any value
void multiple_missing_value1(int a[], int length)
{
    int diff = a[0];
    for (int i = 0; i < length; i++)
    {
        if (a[i] - i != diff)
        {
            while (diff < a[i] - i)
            {
                cout << i + diff << endl;
                diff++;
            }
        }
    }
}

int main()
{
    int a[] = {1, 2, 4, 5};
    cout << "missing value" << endl;
    cout << missing_value1(a, 4) << endl;

    int b[] = {3, 4, 6, 7, 8, 9};
    cout << "missing value" << endl;
    cout << missing_value2(b, 6) << endl;

    int c[] = {3, 4, 6, 7, 8, 9, 11, 15, 16};
    cout << "missing value" << endl;
    multiple_missing_value1(c, 9);
}