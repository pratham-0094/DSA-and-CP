// 2. Lower triangle Matrix --> lower triangle part of the matrix s non-zero and the upper triangle part is zero
// [ 1 , 0 , 0 , 0 , 0 ]
// [ 2 , 9 , 0 , 0 , 0 ]
// [ 9 , 2 , 5 , 0 , 0 ]
// [ 5 , 7 , 1 , 3 , 0 ]
// [ 1 , 8 , 2 , 1 , 7 ]

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
class lower_triangle1
{
private:
    int *A;
    int n;

public:
    lower_triangle1()
    {
        n = 2;
        A = new int[2];
    }

    lower_triangle1(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int x)
    {
        if (i >= j)
            A[i * (i - 1) / 2 + j - 1] = x;
    }

    int get(int i, int j)
    {
        if (i >= j)
            return A[i * (i - 1) / 2 + j - 1];
        else
            return 0;
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i >= j)
                    cout << A[i * (i - 1) / 2 + j - 1] << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;
    }

    ~lower_triangle1()
    {
        delete[] A;
    }
};

// column major
class lower_triangle2
{
private:
    int *A;
    int n;

public:
    lower_triangle2()
    {
        n = 2;
        A = new int[2];
    }

    lower_triangle2(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }

    void set(int i, int j, int x)
    {
        if (i >= j)
            A[n * (j - 1) + (j - 1) * (j - 2) / 2 + i - j] = x;
    }

    int get(int i, int j)
    {
        if (i >= j)
            return A[n * (j - 1) + (j - 1) * (j - 2) / 2 + i - j];
        else
            return 0;
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i >= j)
                    cout << A[n * (j - 1) + (j - 1) * (j - 2) / 2 + i - j] << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;
    }

    ~lower_triangle2()
    {
        delete[] A;
    }
};

int main()
{
    cout << "enter lower triangle element" << endl;
    lower_triangle1 d1(5);
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

    cout << "enter lower triangle element" << endl;
    lower_triangle2 d2(5);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int value;
            cin >> value;
            d2.set(i, j, value);
        }
    }
    cout << "element are" << endl;
    d2.display();
}