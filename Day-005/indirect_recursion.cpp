#include <iostream>

using namespace std;

// there may me more than one function that calling one another in a circular fashion
// the first call second and then second one call the third one which then call the first one, it becomes a cycle
void a(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        b(n - 1);
    }
}

void b(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        a(n / 2);
    }
}

int main()
{
    a(3);
}

// example
//      a(9)
//     /   \
//    9    b(8)
//         /   \
//        8    a(4)
//            /   \
//           4   b(3)
//              /   \
//             3    a(1)
//                 /   \
//                1    b(0)
//                      |
//                      x