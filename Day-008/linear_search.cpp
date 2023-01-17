#include <stdio.h>

// linear traverse through every element and check for the key
struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// best - O(1)
// average - O(n)
// worst - O(n)
// unsccessfull - O(logn)
int LinearSearch1(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            return i;
        }
    }
    return -1;
}

// improvement to linear search
// transposition - when the key is found swap it with the previous index
// move to front/head - when the key is found swap it with the index 0
// in transposition their is a slow reduction in time whereas in move to head their is a certain reduction in time

int LinearSearch2(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}

int LinearSearch3(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Array arr1 = {{2, 23, 14, 5, 6, 9, 8, 12}, 10, 8};
    printf("%d", LinearSearch1(&arr1, 14));
    printf("%d", LinearSearch2(&arr1, 14));
    printf("%d", LinearSearch3(&arr1, 14));
    Display(arr1);
    return 0;
}