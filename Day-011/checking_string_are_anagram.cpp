// Anagram --> two set of strings which are form using same set of aplhabets
// check for two string are of equal size or not

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char a[] = "medical";
    char b[] = "decimal";
    int i, H[26] = {0};

    for (i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97] += 1;
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        H[b[i] - 97] -= 1;
        if (H[b[i] - 97] < 0)
        {
            printf("Not Anagram\n");
            break;
        }
    }

    if (b[i] == '\0')
    {
        printf("Anagram\n");
    }

    // if duplicates are present like
    char c[] = "verbose";
    char d[] = "observe";

    for (i = 0; c[i] != '\0'; i++)
    {
        H[c[i] - 97] += 1;
    }

    for (i = 0; d[i] != '\0'; i++)
    {
        H[d[i] - 97] -= 1;
    }

    int sum = 0;

    for (i = 0; i < 26; i++)
    {
        if (H[i] > 0)
        {
            printf("Not Anagram");
            break;
        }
        else
        {
            sum += 1;
        }
    }

    if (sum == 26)
    {
        printf("Anagram");
    }

    // if two string doesn't have duplicates then we can use bitwise operation
}