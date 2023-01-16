#include <iostream>

using namespace std;

void main()
{
    int a[5];
    // the memory is allocated at runtime but the size of the array is decided at compile time in c language
    // as the size of array cannot be a variable, it must be a constant value
    // it is created in the stack only

    int n;
    cin >> n;
    int b[n];
    // but in cpp, we can create an array of any size at run time
    // it is created in the stack only

    int *p;
    p = new int[5];                     // in cpp
    p = (int *)malloc(5 * sizeof(int)); // in c
    // the p is pointing to the memmory present in the heap
    // we cannot directly access the heap memory, it caan beaccess indirectly
    // when we get memory from the heap, when we use new keyword otherwise all the variable is created inside the stack
    // after sometime if the memory is no required then we should delete the memory otherwise it causes memory laek problem
    delete p;   // in cpp for normal variable
    delete[] p; // in cpp for array
    free(p);    // in c

    // the size of array cannot be increased that is inside the stack, but there are some method that we can increase the size of an array created inside the heap
    int *p = new int[5];
    int *q = new int[10]; // create new array of large sizze in heap
    // copy the old list data
    for (int i = 0; i < 10; i++)
    {
        q[i] = p[i];
    }
    delete[] p; // delete the old list
    p = q;      // let the old pointer point to the new larger array in heap
    q = NULL;   // point he new pointer q to null

    // why he array size cannot be grown
    // because the memory should be contigious
    // as it is not gurantee the next memory location is free or being used by some other program
}