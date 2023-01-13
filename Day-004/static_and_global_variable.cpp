#include <iostream>

using namespace std;

int y = 0;

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

void main()
{
    int a = 5;
    cout << fun(5) << endl;
}
// the static variable is created in the code section
// when the function is called it is only created one time that is at the loading of a programming
// x will not have multiple copy, just like n
// it will have single copy

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
// |    a = 3            |    <----- calling func
// |---------------------|
// |    x = 0            |    <----- code section
// |    y = 0            |
// |---------------------|

// first the recursive calls are made and at returning it wil added with the value of x
// same as static variable, global variable variable also have single copy that is inside the code secton