#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fun(n - 1);
    }
}

int main()
{
    int x = 3;

    fun(x);
    return 0;
}
// let trace the recursion
//              fun(3)
//              /   \
//           fun(2)  3
//           /   \
//        fun(1)  2
//         /   \
//      fun(0)  1
//        |
//        x
// output - 3 2 1

// from last call  it end, so it goes back to previous call where it calls
// this is called preysing tree of recursive function