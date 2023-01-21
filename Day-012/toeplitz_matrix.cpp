// 6. Toepltiz Matrix --> only diagonal elements are non-zero other elements are zero
// [ 1 , 3 , 6 , 1 , 2 ]
// [ 9 , 1 , 3 , 6 , 1 ]
// [ 8 , 9 , 1 , 3 , 6 ]
// [ 4 , 8 , 9 , 1 , 3 ]
// [ 2 , 4 , 8 , 9 , 1 ]

// let M be a matrix then
// M[i, j] = M[i-1, j-1]
// total number of element = n * n
// number of non-zero element = 2n - 1

// for every diagonal, values are remain same
// we don't have to store all element
// we have to store only first row and first column elements

#include <iostream>
#include <stdio.h>

using namespace std;

class toeplitz
{
private:
    int *A;
    int n;

public:
    toeplitz()
    {
        n = 2;
        A = new int[2];
    }

    toeplitz(int n)
    {
        this->n = n;
        A = new int[2 * n - 1];
    }

    void set(int i, int j, int x)
    {
        if (i <= j)
        {
            A[j - i] = x;
        }
        else if (i > j)
        {
            A[n + i - j - 1] = x;
        }
    }

    int get(int i, int j)
    {
        if (i <= j)
        {
            return A[j - i];
        }
        else if (i > j)
        {
            return A[n + i - j - 1];
        }
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i <= j)
                {
                    cout << A[j - i] << " ";
                }
                else if (i > j)
                {
                    cout << A[n + i - j - 1] << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    ~toeplitz()
    {
        delete[] A;
    }
};

int main()
{
    cout << "enter element" << endl;
    toeplitz d1(5);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int value;
            cin >> value;
            d1.set(i, j, value);
        }
    }
    cout << "element are" << endl;
    d1.display();
}