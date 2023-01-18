#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("Elements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
        {
            int temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
    }
}

int isSorted(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->length - 1; i++)
    {
        if (arr->A[i] > arr->A[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    struct Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};
    struct Array arr2 = {{-2, 3, 9, 16, -18, 21, 28, 32, -35}, 10, 9};

    InsertSort(&arr1, 20);
    Display(arr1);

    printf("\n%d", isSorted(&arr1));

    Rearrange(&arr2);
    Display(arr2);

    return 0;
}