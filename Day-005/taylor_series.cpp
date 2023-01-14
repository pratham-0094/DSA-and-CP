#include <iostream>
#include <stdio.h>

using namespace std;

// time - O(n)
// space - O(n)
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 0;

    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + (p / f);
}

int main()
{
    int x, n;
    printf("Enter two no. ");
    cin >> x >> n;
    cout << e(x, n) << endl;
}
