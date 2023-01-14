#include <iostream>

using namespace std;

// method -1
// time - O(1)
// space - O(1)
int sum1(int n)
{
    return n * (n - 1) / 2;
}

// method - 2
// time - O(n)
// space - O(1)
int sum2(int n)
{
    int i, sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// method - 3
// time - O(n)
// space - O(n)
int sum3(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {

        return sum3(n - 1) + n;
    }
}

//             -------> 0 | n = 0
// sum(n)-----|
//             ------> sum(n -1) + n  | when n > 0

int main()
{
    cout << sum1(10) << endl;
    cout << sum2(10) << endl;
    cout << sum3(10) << endl;
}