// queue is a logical data structure that work on principle first-in first-out / last-in last-out ( FIFO / LILO )
// queue is a colection of element, set of values that is inserted or deleted in following this principle
// queue can be implemented using array / linked list
// it has two ends front (deletion) and rear (insertion)

// ADT of queue - abstract datatype of queue
// that contain data representation and operations on queue

// data:
// we need space for storing the element
// front pointer - for deletion
// rear pointer - for insertion

// operation:
// enqueue(x) - adding value to the que ue from rear
// denqueue() - deleting value from front
// isEmpty() - return true if queue is empty
// isFull() - return true if queue is full
// first() - return first element of queue
// last() - return last element of queue

// Impletementation of queue using

// 1. single pointer
// we can point index with one pointer and insert element in O(1),
// and for enqueue, we delete element at index 0
// so we have to move all the elemetns to left to fill the blank space
// that take O(n)

// 2. double pointer (rear and front)
// it is same as implementation using single pointer only difference is that
// we have second pointer so whenever we delete a index, now we increment the front pointer by 1
// so new index is 1 and deletion takes O(1)

// Drawback of queue using array
// we can only use the position only once as for deleting the element
// we increment the index so the indexs before front are unused
// and if front and rear are at last index then it satisfy both full and empty condition

// Solution
// 1. resetting pointers
// at any time if queue is empty, then re-intialize front and read = - 1

// 2. Circular queue
// after it reachs the end it move circular, front and rear are moving circularly using mod operation
// i. e. rear = (rear + 1) % size and front = (front + 1) % size
