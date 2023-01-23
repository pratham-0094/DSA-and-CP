// Array is of fixed size when we create an array we have mention its size,
// and later we cannot increase or decrease it
// whenever we know the size of elements we can use array but for some case when the size is unknown
// or we dont't know how many elements we are going to store in runtime then we cannot decide the size of an array
// the size may be insufficient or may be excess

// we can create array either in stack or heap (using pointer)
// but all the memory space is contigous we can access them with index
// for this we need a data structure that can be increase or decrease at runtime

// Linked List --> it is collection of nodes where each node can store a value or an element and also a pointer to next element
//  ---- ----        ---- ----
// |  5 | * | --->  |  4 | * | --->  Null
// ---- ----        ---- ----

// we can insert new elements or delete
// it is created always in heap

#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

// the pointer to next node is also of type node so it is called self refrential structure
// self refrential structure are used inLinked List
// we can also use structure in C++ programming, it is same as class
// In class, everything by default is private
// In structure, everything by default is public

int main()
{
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    //  p = new Node;

    p->data = 10;
    p->next = 0;

    // for checking "p" is pointiing to NULL or not we can use
    if (p == NULL)
        ;
    if (p == 0)
        ;
    if (!p)
        ;

    // but if it pointing to some node then we can use
    if (p != NULL)
        ;
    if (p != 0)
        ;
    if (p)
        ;

    // simmilarily, to check the last node we can use
    if (p->next == NULL)
        ;
}
