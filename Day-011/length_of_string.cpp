#include <iostream>
#include <stdio.h>

using namespace std;

int length_of_string(char *s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char s[] = "PRAKHAR";
    cout << "Length of string = " << length_of_string(s) << endl;
}