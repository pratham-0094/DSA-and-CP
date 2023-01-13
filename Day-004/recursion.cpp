// recursive function - a function is clling itself
// there must be some base condition that will terminate recursion, otherwise it goes to infinite calling
// recursive function are traced in the formm of a tree

// generalized recursion
// void fun(int n)
// {
//     if (n > 0)
//     {
//         cout << "line 1" << endl;     this will execute at run time
//         fun(n - 1);                   this will execute at returning time
//         cout << "line 2" << endl;     this will execute at returning time
//     }
// }
// the portion that execute at run time is called ascending and the portion execute at return time is called descending
// difference between loop and recurion is loop will have ascending phase only but recursion will have ascending as well as descending phase