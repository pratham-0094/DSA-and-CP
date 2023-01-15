#include <iostream>

using namespace std;

// method - 1
// time - O(n)
// space - O(1)
int fact1(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// method - 2
// time - O(n)
// space - O(n)
int fact2(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 1;
    }
    else
    {

        return fact2(n - 1) * n;
    }
}

//              -------> 1 | n = 0
// fact(n)-----|
//              ------> fact(n -1) * n  | when n > 0

int main()
{
    cout << fact1(10) << endl;
    cout << fact2(10) << endl;
}