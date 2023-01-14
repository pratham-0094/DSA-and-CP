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

// if it contain any statement before the function call
// then it is not a head recursion
// it does not have operation at time of calling, it has to do everything only at the time of returning

// let convert the above code in the form of loop
// void fun(int n)
// {
//     int i;
//     while (i <= n)
//     {
//         cout << i << endl;
//         i++;
//     }
// }
// fun(3);
// it can no easily converted into loop, but ic can be convered