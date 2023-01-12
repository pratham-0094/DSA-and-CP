#include <iostream>

using namespace std;

// function declaration - prototype/header of a function
int add(int a, int b)
{
    // body is called function definition
    // a and b are formal parameters
    int c;
    c = a + b;
    return c;
}

int main()
{
    // monolithic programming - everything inside single block
    // modular/procedural programming - breaking a program into smaller piece of function and using those inside the main function

    // function call
    int x = 3, y = 4, z;
    z = add(x, y);
    // xand y  are actual parameters
    cout << z << endl;
}