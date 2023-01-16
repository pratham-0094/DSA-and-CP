#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    // creating two dimensional array or array of arrays
    // with rows = 3 and columns =4
    // as index start with 0
    // int A[3][4];

    // method-1
    // completely in stack
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // memory allocatd as single dimension array in stack
    // but compilar allow us to access it as 2-d array

    // method-2
    // partially in heap
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    //  we can normally assign any value to it
    B[1][2] = 15;

    // method-3
    // completely in heap
    int **C;
    // this is created inside stack

    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> C[i][j];
        }
    }

    printf("Array will be\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", C[i][j]);
        }
        cout << endl;
    }
}