#include <iostream>
#include <stdio.h>

using namespace std;
class Array_test
{

public:
    int *A, length;

    Array_test()
    {
    }

    Array_test(int l)
    {
        A = new int[l];
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
};

Array_test Merge(Array_test a, Array_test b)
{
    int i = 0, j = 0, k = 0;

    Array_test c(a.length + b.length);
    while (i < a.length && j < b.length)
    {
        if (a.A[i] < b.A[j])
            c.A[k++] = a.A[i++];
        else
            c.A[k++] = b.A[j++];
    }

    for (; i < a.length; i++)
        c.A[k++] = a.A[i];

    for (; j < b.length; j++)
        c.A[k++] = b.A[j];

    return c;
}

void Display(int C[], int length)
{
    cout << "Array elements are" << endl;
    for (int i = 0; i < length; i++)
        cout << C[i] << " ";

    cout << endl;
}

int main()
{
    int l;
    printf("Enter 1st array length ");
    cin >> l;
    Array_test arr1(l);
    arr1.Intialize();

    arr1.Display();

    printf("Enter 2nd array length ");
    cin >> l;
    Array_test arr2(l);
    arr2.Intialize();

    arr2.Display();

    Array_test C = Merge(arr1, arr2);
    C.Display();
    return 0;
}