#include <iostream>

using namespace std;

// pascal's riangle
//              1
//             / \
//            /   \
//           1     1
//          / \   / \
//         /   \ /   \
//        1     2     1
//       / \   / \   / \
//      /   \ /   \ /   \
//     1     3     3     1

int c(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return c(n - 1, r - 1) + c(n - 1, r);
    }
}

int main()
{
    cout << c(4, 2) << endl;
}