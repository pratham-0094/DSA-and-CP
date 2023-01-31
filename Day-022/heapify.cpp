// for creating a max heap we send element fron leaf node to root node
// it take lots of adjustment
// it read element in array from left to right and insert new element
// takes O(nlog(n))

// but heapify read element from right to left
// it compare node to its child and build max heap in less no. of adjustments
// takes O(n)

// we can use heap as priority queue
// larger the number, heigher the priority
// inserting elements we insert in max heap then just delete root node