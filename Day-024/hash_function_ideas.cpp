// most important properties of hash function is selected such that the keys are uniformly distributed
// all value should not be concentrated or collected at same place
// if we are using chaining then size of hash table should be anything
// but using linear probing, then size of hash table should be double of numer of elements
// loading factor <= 0.5
// we have to give extra space for acheiving hashing

// 1. Mod
// h(x) = (x % size) + 1
// it is preferred that size is prime number

// 2. Midsquare
// h(x) = x^2, then take mid digit of result

// 3. Folding
// eg - 123456
// then add pair of digits like 12 + 34 + 56
// then again do the until you get two digit number or add last two digit to find a single digit number
// then result should be a index in hash table

// for string like "ABC" we convert to ASCII code then do folding