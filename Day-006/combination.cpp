#include <iostream>

using namespace std;

// nCr = n! / (r!(n-r)!)
// combination formula, this is also called selection formula
// if set of objects are given o us, then how many ways we can select the subse of those object

int fact(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int c(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}

int main()
{
    cout << c(5, 5) << endl;
}