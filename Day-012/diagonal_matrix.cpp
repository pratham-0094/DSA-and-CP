// 1. Diagonal Matrix --> only diagonal elements are non-zero other elements are zero
// [ 1 , 0 , 0 , 0 , 0 ]
// [ 0 , 9 , 0 , 0 , 0 ]
// [ 0 , 0 , 5 , 0 , 0 ]
// [ 0 , 0 , 0 , 3 , 0 ]
// [ 0 , 0 , 0 , 0 , 7 ]

// let M be a matrix then
// M[i, j] = 0      if i != j
// M[i, j] != 0      if i == j
// total number of element = n * n
// number of non-zero element = n
// number of zero element = n * ( n - 1 )

// storing "0" take extra space. so, we can store it in single dimension array

#include <iostream>
#include <stdio.h>

using namespace std;

class diagonal
{
private:
    int *A;
    int n;

public:
    diagonal()
    {
        n = 2;
        A = new int[2];
    }

    diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }

    void set(int i, int j, int x)
    {
        if (i == j)
            A[i - 1] = x;
    }

    int get(int i, int j)
    {
        if (i == j)
            return A[i - 1];
        else
            return 0;
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    cout << A[i] << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;
    }

    ~diagonal()
    {
        delete[] A;
    }
};

int main()
{

    diagonal d(5);
    d.set(1, 1, 5);
    d.set(2, 2, 1);
    d.set(3, 3, 3);
    d.set(4, 4, 9);
    d.set(5, 5, 7);
    cout << "element are" << endl;
    d.display();
}