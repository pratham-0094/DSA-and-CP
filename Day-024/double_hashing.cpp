// Double probing --> Insert key at index obtained from hash function h1(x) = x % 10
// and h2(x) = R - (x % R), where R is nearest prime number to the size of hash table
// if inplace is already occupied then we use another hash function
// h'(x) = ( h1(x)  + i * h2(x) ) % 10 where i = 0, 1, 2 ...

// for avoiding that we use new hash function that store the element at position square of i
// average successful time --> t = -log(1 - lambda) / lambda
// average unsuccessful time --> t = 1 / ( 1 - lambda )

// when there is collision it give position at different pattern,
// such that it utilizes the space