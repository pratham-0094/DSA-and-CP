#include <iostream>
#include <stdio.h>

using namespace std;

class Array_test
{
private:
    int *A, size, length;

public:
    Array_test()
    {
    }

    Array_test(int n, int l)
    {
        A = new int[n];
        size = n;
        length = l;
    }

    void Intialize()
    {
        printf("Enter Array elements (%d emements) ", length);
        for (int i = 0; i < length; i++)
            cin >> A[i];
    }

    void Display()
    {
        cout << "Array elements are" << endl;
        for (int i = 0; i < length; i++)
            cout << A[i] << " ";

        cout << endl;
    }

    void Append(int n)
    {

        if (length >= size)
        {
            printf("No space\n");
            return;
        }

        A[length] = n;
        length++;
    }

    void Insert(int n, int m)
    {
        if (m >= size || length >= size)
        {
            printf("No space\n");
            return;
        }

        if (m >= length)
            A[m] = n;

        for (int i = length; i > m; i--)
            A[i] = A[i - 1];

        A[m] = n;
        length++;
    }

    void Delete(int m)
    {

        if (m >= length)
            return;

        for (int i = m; i < length - 1; i++)
            A[i] = A[i + 1];

        length--;
    }

    int Get(int index)
    {
        if (index >= 0 && index < length)
            return A[index];
        return -1;
    }

    void Set(int index, int x)
    {
        if (index >= 0 && index < length)
            A[index] = x;
    }

    int Max()
    {
        int max = A[0];
        int i;
        for (i = 1; i < length; i++)
        {
            if (A[i] > max)
                max = A[i];
        }
        return max;
    }

    int Min()
    {
        int min = A[0];
        int i;
        for (i = 1; i < length; i++)
        {
            if (A[i] < min)
                min = A[i];
        }
        return min;
    }

    int Sum()
    {
        int s = 0;
        int i;
        for (i = 0; i < length; i++)
            s += A[i];

        return s;
    }

    float Avg()
    {
        float s = 0;
        int i;
        for (i = 0; i < length; i++)
            s += A[i];

        return s / length;
        // or
        // return (float)Sum() / length;
    }
};

int main()
{
    int n, l, a, b;
    printf("Enter size of array ");
    cin >> n;
    do
    {
        printf("Enter length of array ");
        cin >> l;

    } while (l > n);
    Array_test A(n, l);
    A.Intialize();
    printf("Enter element to append ");
    cin >> a;
    A.Append(a);
    A.Display();
    printf("Enter element to insert ");
    cin >> a;
    printf("and at index ");
    cin >> b;
    A.Insert(a, b);
    A.Display();
    printf("Delete element from index ");
    cin >> b;
    A.Delete(b);
    A.Display();

    // array operations
    A.Get(1);
    A.Set(2, 4);
    A.Max();
    A.Min();
    A.Avg();
    A.Sum();
}
