// 3. Lower triangle Matrix --> upper triangle part of the matrix s non-zero and the lower triangle part is zero
// [ 1 , 3 , 7 , 1 , 9 ]
// [ 0 , 9 , 5 , 1 , 3 ]
// [ 0 , 0 , 5 , 8 , 6 ]
// [ 0 , 0 , 0 , 3 , 2 ]
// [ 0 , 0 , 0 , 0 , 7 ]

// let M be a matrix then
// M[i, j] = 0      if i < j
// M[i, j] != 0      if i >= j
// total number of element = n * n
// number of non-zero element = n * ( n + 1 ) / 2
// number of zero element = n * ( n - 1 ) / 2

#include <iostream>
#include <stdio.h>

using namespace std;

// row major
class upper_triangle1
{
private:
    int *A;
    int n;

public:
    upper_triangle1()
    {
        n = 2;
        A = new int[2];
    }

    upper_triangle1(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int x)
    {
        if (i <= j)
            A[(i - 1) * n - (i - 2) * (i - 1) / 2 + j - i] = x;
    }

    int get(int i, int j)
    {
        if (i <= j)
            return A[(i - 1) * n - (i - 2) * (i - 1) / 2 + j - i];
        else
            return 0;
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i <= j)
                    cout << A[(i - 1) * n - (i - 2) * (i - 1) / 2 + j - i] << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;
    }

    ~upper_triangle1()
    {
        delete[] A;
    }
};

// column major
class upper_triangle2
{
private:
    int *A;
    int n;

public:
    upper_triangle2()
    {
        n = 2;
        A = new int[2];
    }

    upper_triangle2(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int x)
    {
        if (i <= j)
            A[j * (j - 1) / 2 + i - 1] = x;
    }

    int get(int i, int j)
    {
        if (i <= j)
            return A[j * (j - 1) / 2 + i - 1];
        else
            return 0;
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i <= j)
                    cout << A[j * (j - 1) / 2 + i - 1] << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;
    }

    ~upper_triangle2()
    {
        delete[] A;
    }
};

int main()
{
    cout << "enter upper triangle element" << endl;
    upper_triangle1 d1(5);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int value;
            cin >> value;
            d1.set(i, j, value);
        }
    }
    d1.display();

    cout << "enter upper triangle element" << endl;
    upper_triangle2 d2(5);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int value;
            cin >> value;
            d2.set(i, j, value);
        }
    }
    d2.display();
}