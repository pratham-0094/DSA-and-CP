// memory is divided into smaller addressable unit  that are called as bytes
// address have a single value it is not like coordinate(x, y)
// memory is divided into manageable unit called as segment

// the memory is divided into three parts - code section, stack and heap
// first the program is brought inside the code section, the size is depend on the program size and then this program is loaded, once it loaded the cpu strat execution the program, and this program utilize the remaining memory as divided into stack and heap

// void main(){
//     int a;
//     float b;
// }

// assuming integer take 2 bytes and float take 4 bytes
// then 2 bytes for a and 4 bytes for b is allocated inside the stack this is belong to main fuction so it is called as stack frame or activation record of  that function
// how the memory is allocated inside the stack, it depend whatever variable you have inside a function
// the size of the required memory by a function was decided at compile time only
// compiler see that we need some bytes, it will beforehand decided that this function needs so much memory and that memory is obtained
// how many bytes is required by function was it decided at compile time so it is static, this memory allocaton is static

// void fun2(int i)
// {
//     int a;
// }

// void fun1()
// {
//     int x;
//     fun2();
// }

// void main()
// {
//     int a;
//     float b;
//     fun1();
// }
// if their are function calls in program as seen in above code then first the machine code of this program is copied to the code section, then mamory for variable a and b is allocated inside stack, then varible is created inside the stack for fun1(), then the program goes to fun2() it created space for variable i and a
// currently fun2() is running, so the current executing function with access is the topmost activation record
// main has its own activation record, then fun1() is call which as its activation record along with the main activation record and then fun2() is call which contain its own activation record along with fun1()
// when the fun2() is terminated it goes back to fun1() after the line where it being call, then activation record for fun2() is deleted
// when fun1() completes its execution it comes to the main function and activation record for fun1() is deleted
// and once main function is executed its activation record is deleted

// if the things kept one above another or just randomly we can use term heap
// heap is used if the things are properly organised like tower-like thing or if it is not organised and also it's looking like tower i.e. stack memory is organised
// heap memory should be treated like a resource
// program can't directly access heap memory i.e. can access stack and code section directly

// void main()
// {
//     int *p;
//     p = new int[5];
//     p = (int *)maloc(5 * sizeof(int));
// }
// p is a pointer in stack that point to a array of size 5 in heap memory
// it is important that we request for allocation so that we should deallocate it

// explanation
// for above function in stack

// |---------------------|
// |    func2()          |
// |---------------------|
// |    func1()          |    <------ this is stack
// |---------------------|
// |    a , b            |
// |---------------------|

// when fun2 terminated then it removed from stack and control goes to fun1

// Heap Memory --> unorganised memory when required take the momory,
// when don't required release the memory
// programs can not access heap momory directly but access using pointer
// pointer size depends of its datatype, get allocate in stack
// p = new int[] --> momory will allocated in heap
// p = (int *)malloc(5 * sizeof(int))

// for deallocation of memory
// p = NULL or delete []p
// if it not been deallocated then it wiil used by program
// casuse loss of memory