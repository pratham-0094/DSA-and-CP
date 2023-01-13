#include <iostream>
#include <stdio.h>

using namespace std;

void func1(int n)
{
    if (n > 0)
    {
        func1(n - 1);
        printf("%d\n", n);
    }
}

int maint()
{
    int x = 3;
    func1(x);
}

// for this function in stack

// |---------------------|
// |    n = 0            |    <----- terminated and activation recored is deleted, control goes back to previous -----|
// |---------------------|                                                                                            |
// |    n = 1            |    <----- calling func                                                     <----------------
// |---------------------|
// |    n = 2            |    <----- calling func
// |---------------------|
// |    n = 3            |    <----- calling func
// |---------------------|
// |    x = 3            |    <----- calling func
// |---------------------|

// leaving the main function, there are four activations record created
// each has one variable consuming --> 4 * size of that variable
// this is tracing
// for 3 there are four activation records, so for "n" there will be "n + 1" activation records  or order of n --> O(n)
