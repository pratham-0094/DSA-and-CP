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
// in tail recursion all operation will be performed at calling time and the function will not be any performing any operation at returning time
// ail recursion means it does not have any returning processing

// if it contain
// fun(n)+n;
// then it is not a tail recursion, as n is added at returning time

// let convert the above code in the form of loop
// void fun(int n)
// {
//     while (n > 0)
//     {
//         cout << n << endl;
//         n--;
//     }
// }
// fun(3);
// tail recursion can be easily converted in the form of loop

// lets compare the time and space complexity
// both have time complexity of O(n)
// but as recursion using stack, for value of 3 it create 4 activation record so he space complexity is O(n)
// but in while loop it not calling itself again therfore it has space complesity of O(1)
// so the conclusion is if you have to write a tail recursion, then beter is to convert it into loop that is more efficient in term of space