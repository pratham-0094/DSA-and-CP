// Hashing --> useful for seraching
// if we have list of keys then we can use hashing
// we use function for hashiing (one-one mapping many-one mapping)
// hash function give us index where the element will be stored

// h(x) = x, is called ideal hashing as each element is stored index = value
// but huge space required

// modifying hash function,
// h(x) = x % 10
// then it save space but there will be collision of keys

// resolving collision
// 1. Open hashing --> consume extra space
//    - chaining
// 1. Closed hashing- -> doesn't increase space
//    - Open Addressing --> if space is already occupied then it store in any free space
//           i) linear probing
//          ii) quadratic probing
//         iii) double hasning