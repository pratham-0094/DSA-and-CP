#include <iostream>

using namespace std;

// in this a recursion function wil pass parameter as a recursive call
int fun(int n)
{
    if (n < 100)
    {
        return n - 10;
    }
    else
    {
        return fun(fun(n - 1));
    }
    // as it take recursive function as a parameter the recursion function is not eveluated, the outside return call can not be made
}

int main()
{
    cout << fun(3) << endl;
}

// example
//  fun(97)
//     |
//  fun(fun(108))
//     |
//  fun(fun(108))
//  fun(98)
//     |
//  fun(fun(109))
//  fun(99)
//     |
//  fun(fun(110))
//  fun(100)
//     |
//  fun(fun(111))
//  fun(101)
//     |
//     91
