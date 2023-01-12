#include <iostream>

using namespace std;

int main()
{
    // reference is usefull for parameter passing
    // another name for variable
    // used for writing small function
    // it is not an pointer, so does not take any memory
    // by using reference the code of the function is place on the function call

    // declaration
    int a = 10;
    int &r = a;
    cout << a << endl;
    cout << r << endl;
}