#include <iostream>
#include <stdio.h>

using namespace std;

// method - 1
// time - O(n)
// space - O(1)
int fib1(int n)
{
    int t0 = 0, t1 = 1, s;

    if (n <= 1)
    {
        return n;
    }

    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// method - 2
// time - O(2^n)
// space - O(n)
int fib2(int n)
{
    // excessive recursion - a recursive function calling itself multiple times for same value
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib2(n - 2) + fib2(n - 1);
    }
}

// method - 3
// time - O(n)
// space - O(n)
// memoization
// excessive recursion call are made therefore, to avoid this we can use ststic/global array variable which can store all the values so that we cannot recalculate it again
int f[11];
int fib3(int n)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
        {
            f[n - 2] = fib3(n - 2);
        }
        if (f[n - 1] == -1)
        {
            f[n - 1] = fib3(n - 1);
        }
        return f[n - 2] + f[n - 1];
    }
}

//             -------> 0 | n = 0
//             -------> 1 | n = 1
// fib(n)-----|
//             ------> fib(n -2) + fib(n-1)  | when n > 0

int main()
{
    for (int i = 0; i <= 11; i++)
    {
        f[i] = -1;
    }
    cout << fib1(4) << endl;
    cout << fib2(4) << endl;
    cout << fib3(4) << endl;
}
