#include <iostream>
#include <stdio.h>

using namespace std;

void compare(char a[], char b[])
{
    int i = 0, j = 0;
    for (i, j; a[i] != '\0' && b[j] != '\0'; i++, j++)
    {
        if (a[i] != b[i])
            break;
    }

    if (a[i] == b[j])
        printf("equal\n");
    else if (a[i] < b[j])
        printf("%s is smaller\n", a);
    else
        printf("%s is greater\n", a);
}

bool isPalindrome(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] != b[i])
            return false;
    }

    if (a[i] == b[i])
        return true;

    return false;
}

char *reverse(char a[])
{
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
        ;

    char *b = new char[i + 1];
    i--;

    for (j = 0; i >= 0; j++, i--)
    {
        b[j] = a[i];
    }
    b[j] = '\0';

    return b;
}

int length_of_string(char *s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// method - 2
bool isPalindrome_2(char a[], int len)
{

    for (int i = 0; i < len; i++, len--)
    {
        if (a[i] != a[len - 1])
            return false;
    }
    return true;
}

int main()
{
    char a[] = "Painter";
    char b[] = "Painting";

    compare(a, b);
    char *c = reverse(a);
    cout << "Palindrome = "
         << isPalindrome(a, c) << endl;
    int len = length_of_string(a);
    cout << "Palindrome = "
         << isPalindrome_2(a, len) << endl;
}