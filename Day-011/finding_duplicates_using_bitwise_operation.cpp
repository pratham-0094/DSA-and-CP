#include <iostream>
#include <stdio.h>

using namespace std;

// ANDing or masking -> knowing a particular bit in memory is 0 or 1
// a = 0 0 0 1 0 0 1 0
// to check bit at 2nd place is 0 or 1 , we can perform and operation with b
// b = 0 0 0 0 0 0 0 1
// and left shift by 2
// b = b << 2
// now, if a & b is 0 then 2nd place is zer0

// ORing or merging -> setting a particular bit in memory to 1
// a = 0 0 0 1 0 0 0 0
// to check bit at 2nd place is 0 or 1 , we can perform and operation with b
// b = 0 0 0 0 0 0 0 1
// and left shift by 2
// b = b << 2
// now, a = a | b set 2nd place to 1

int main()
{
    char a[] = "finding";
    long int H = 0, x = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        x = 1;
        x = x << (a[i] - 97);
        if ((x & H) > 0)
        {
            printf("%c is duplicate\n", a[i]);
        }
        else
        {
            H = x | H;
        }
    }
}