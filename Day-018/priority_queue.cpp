// Priority queue --> we can insert like queue, but when deletion is performed it is done on basis of priorities
// there are two types of priority
// 1. limited set of priorties
// we have limited set of priorities like 1 - 10, and same no. of queues like q1, q2, q3.....
// when deletion is done , first element from highest priority will be deleted

// 2. element priority
// element itself has priority like set of elements = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
// so when deletion is done element with highest priority deleted
// for this we can use either
// i) insert in same order and when deletion is performed find the minimum no.
// it take O(n) for deletion for searching the element and O(1) for insertion

// ii) insert in sorted order in descending and when deletion is performed delete the last index
// it take O(1) for deletion and O(n) for insertion as we have to sort the elements