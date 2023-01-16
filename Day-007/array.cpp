// scalar variable - that can store only one value
// int x;

// vector variable - that can store multiple variable
// array - colection of elements and all element are of same ptype
// int a[10];
// by using name and index we can access array data

// array declaration
// int a[10];
// hence nohing will be iniialize, then the value will be garbage

// int a[5] = {1, 2, 3, 4, 5};
// array will be created during runtime and all the value will be initialized

// int a[5] = {1, 2};
// array of 5 index will be created but as we only initialize two value therefore remaining value will be zero
// because once the iniialization process start it try to initialize all the element

// int a[5] = {0};
// the firs index value will be zero but as we start iniializing hen all the remaining value will be zero

// int a[] = {1, 2, 3, 4, 5};
// then depending upon the number of element that have menioned in the iniialized list, the size of array is defined

// array access
// we can access array using name and index enclosed with ine square bracket
// cout<<a[9]<<endl;

// access the whose array using for loop
// for (int i = 0; i < 5; i++)
// {
//     cout << a[i] << endl;
// }

// another method
// int a[] = {1, 2, 3, 4, 5};
// cout << a[2] << endl;
// cout << 2[a] << endl;
// we can use he index ouside and the name inside the subscript
// cout << *(a + 2) << endl;
// using the poiner automatically

// array representation by compiler
// in progam we se variable to represent some data but the comiler convert it into machine code
// during execution the memory is allocated, this variable represent the addresss so basiclly the machine code referred this locaton to access the variable, not by the name
// the compiler has to convert name into address, but the address is known during execution, so how the compiler wil write down the address at compile time
// int A[5] = {1, 2, 3, 4, 5}
// for 3rd element or i = 3, it uses
// Addr(A[3]) = Base Address + 3 * sizeof(int)
// or
// Addr(A[i]) = Base Address + i * sizeof(type(A[i]))
// or
// Addr(A[i]) = Lo + i * w, where w is size of datatype
// base address will be known at runtime and it is called data binding