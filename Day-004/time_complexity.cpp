#include <iostream>
#include <stdio.h>

using namespace std;

int func(int n)
{

    if (n > 0) // --------------------- 1
    {
        printf("%d\n", n); // --------------------- 1
        func(n - 1);       // --------------------- T(n - 1)
    }

    // T(n) = T(n -1) + 2
}

//          -------> 1 | n = 0
// T(n)-----|
//          ------> T(n -1) + 2  | when n > 0

// By substitution method
// T(n) = T(n - 1) + 2 ---------eqn (i)
// T(n - 1) = T(n - 2) + 2 ---------eqn (ii)
// T(n - 2) = T(n - 3) + 2 ---------eqn (iii)

// putting value of eqn (iii) in eqn (ii)
// T(n - 1) = [ T(n - 3) + 2 ] + 2
// T(n - 1) = T(n - 3) + 4

// same for eqn (i)
// T(n) = T(n - 3) + 6
// T(n) = T(n - 3) + 2 * 3
// T(n) = T(n - k) + 2 * k ---------eqn (iv)

// assume
// n - k = 0  so n = k
// T(n) = T(n - n) + 2 * n
// T(n) = T(0) + 2 * n
// T(n) = 1 + 2 * n
// O(n)