#include <iostream>

using namespace std;

// we know that
//  A - 65      a - 90
//  the difference between lowercase and uppercase is 32
int main()
{
    char a[] = "PrAthAm";
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        // if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        else if (a[i] >= 97 && a[i] <= 122)
        // else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
    }
    cout << a << endl;
}