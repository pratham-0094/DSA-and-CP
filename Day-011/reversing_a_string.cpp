#include <iostream>

using namespace std;

// method - 1
char *reverse1(char a[])
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

// method - 2
char *reverse2(char a[])
{
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
        ;
    i--;

    for (j = 0; i > j; j++, i--)
    {
        char temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }

    return a;
}

int main()
{
    char a[] = "pratham02";
    cout << "reverse of string " << a << " is" << endl;
    cout << reverse1(a) << endl;

    cout << "reverse of string " << a << " is" << endl;
    cout << reverse2(a) << endl;
}