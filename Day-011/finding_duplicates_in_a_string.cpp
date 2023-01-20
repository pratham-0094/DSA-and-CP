#include <iostream>

using namespace std;

// method - 1
void count_duplicate_value1(char a[])
{
    int size;
    for (size = 0; a[size] != '\0'; size++)
        ;
    size = size--;

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        if (a[i] != 0)
        {
            for (int j = i + 1; j <= size; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = 0;
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
void count_duplicate_value2(char a[])
{
    int h[26] = {0};

    // Traversing in array
    for (int i = 0; a[i] != '\0'; i++)
    {
        h[a[i] - 97]++; // for lowercase only
        // h[a[i] - 65]++; // for uppercase only
    }

    // finding duplicate values
    for (int i = 1; i < 26; i++)
    {
        if (h[i] > 1)
            cout << char(i + 97) << " appear " << h[i] << " times" << endl; // for lowercase only
        // cout << char(i + 65) << " appear " << h[i] << " times" << endl;     // for uppercase only
    }
}

int main()
{
    char a[] = "finding";
    cout << "duplicate value" << endl;
    count_duplicate_value1(a);

    char b[] = "finding";
    cout << "duplicate value" << endl;
    count_duplicate_value2(b);
}