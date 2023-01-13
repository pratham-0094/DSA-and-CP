#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int x = 3;

    fun(x);
    return 0;
}
// let trace the recursion
//      fun(3)
//      /   \
//     3   fun(2)
//         /   \
//        2   fun(1)
//            /   \
//           1   fun(0)
//                 |
//                 x
// output - 1 2 3