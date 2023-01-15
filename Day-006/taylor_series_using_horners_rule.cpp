#include <iostream>
#include <stdio.h>

using namespace std;

// Taylor Series -->
// e^x = 1 + (x/1) + (x^2/2!) + (x^3/3!) + ..... + n terms
//     = 0 +  0    +    2    +     4    + ....  <----- no. of multiplication required
//  2 [ 1 + 2 + 3 + 4 + ....]  = 2 * n( n + 1) / 2  =  n(n + 1) = O(n^2)

// Now, reducing the no. of mutiplication
// e^x = 1 + (x/1) + (x^2/2!) + (x^3/3!) + ..... + n terms
// e^x = 1 + (x/1) [ 1  + (x/2) + (x^2/3*2) + ..... + n terms ]       taking x/1 commmon
// e^x = 1 + (x/1) [ 1  + (x/2) [ 1 + (x/3) + ..... + n terms ] ]     taking x/2 commmon
//     = 0 +  1   + 0  +   1    + 0 +   1  + ....  <----- no. of multiplication required

// so, for "n = 3" no. of multiplication will be 3
// therefore Time complexity = O(n), reduced from O(n^2)
// QUadratic to linear

// method - 1
double e1(int x, int n)
{
    static double p = 1;

    if (n == 0)
        return p;
    p = 1 + ((x * p / n));
    return e1(x, n - 1);
}

// method - 2
double e2(int x, int n)
{
    double p = 1;

    for (; n > 0; n--)
    {
        p = 1 + ((x * p / n));
    }
    return p;
}

// method - 3
double e3(int x, int n)
{
    double p = 1, num = 1, den = 1;

    for (int i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        p += num / den;
    }
    return p;
}

int main()
{
    int x = 0, n = 0;
    printf("Enter two no. ");
    cin >> x >> n;
    cout << e1(x, n) << endl;
    cout << e2(x, n) << endl;
    cout << e3(x, n) << endl;
}