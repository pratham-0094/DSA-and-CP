#include <iostream>

using namespace std;

int valid(char *c)
{
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (!(c[i] >= 65 && c[i] <= 90) && !(c[i] >= 97 && c[i] <= 122) && !(c[i] >= 48 && c[i] <= 57))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char *a = "pratham02";
    if (valid(a))
    {
        cout << "valid string" << endl;
    }
    else
    {
        cout << "invalid string" << endl;
    }
}