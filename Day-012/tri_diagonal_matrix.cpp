// 5. Tri-diagonal Matrix --> elements are in main diagonal, and also in upper, lower diagonal
// [ 1 , 3 , 0 , 0 , 0 ]
// [ 4 , 9 , 5 , 0 , 0 ]
// [ 0 , 8 , 5 , 1 , 0 ]
// [ 0 , 0 , 2 , 3 , 9 ]
// [ 0 , 0 , 0 , 3 , 7 ]

// let M be a matrix then
// main diagonal  = i - j = 0
// lower diagonal = i - j = 1
// upper diagonal = i - j = -1
// all these are non-zero and other element are zero

// M[i, j] = non-zero      if |i - j| <= 1
// M[i, j] = 0             if |i - j| >= 1
// total number of element = n * n
// number of non-zero element = (3 * n) - 2
// number of zero element = n * n - ( (3 * n) - 2 )

// we store it in single dimension
// first lower diagonal then main diagonal and then upper diagonal

// simmilarily, square band matrix --> has n diagonal on both side

#include <iostream>
#include <stdio.h>

using namespace std;

class tri_diagonal
{
private:
    int *A;
    int n;

public:
    tri_diagonal()
    {
        n = 2;
        A = new int[2];
    }

    tri_diagonal(int n)
    {
        this->n = n;
        A = new int[3 * n - 2];
    }

    void set(int i, int j, int x)
    {
        if (i - j == 1)
            A[j - 1] = x;
        else if (i - j == 0)
            A[n - 1 + j - 1] = x;
        else if (i - j == -1)
            A[2 * n - 1 + i - 1] = x;
    }

    int get(int i, int j)
    {
        if (i - j == 1)
            return A[j - 1];
        else if (i - j == 0)
            return A[n - 1 + j - 1];
        else if (i - j == -1)
            return A[2 * n - 1 + i - 1];
        else
            return 0;
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i - j == 1)
                    cout << A[j - 1] << " ";
                else if (i - j == 0)
                    cout << A[n - 1 + j - 1] << " ";
                else if (i - j == -1)
                    cout << A[2 * n - 1 + i - 1] << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;
    }

    ~tri_diagonal()
    {
        delete[] A;
    }
};

int main()
{
    int n;
    cout << "Enter Dimension" << endl;
    cin >> n;

    cout << "Enter Elements" << endl;
    tri_diagonal d(n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int value;
            cin >> value;
            d.set(i, j, value);
        }
    }

    cout << "Array is" << endl;
    d.display();
}