#include <iostream>

using namespace std;

// recursion that is calling itself only onetime
void fun(int n)
{
    if (n > 0)
    {
        // statement - 1
        // statement - 2
        cout << n << endl;
        fun(n - 1);
        // statement - 3
    }
}

int main()
{
    fun(3);
}

