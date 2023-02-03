// Quadratic probing --> Insert key at index obtained from hash function h(x) = x % 10
// if inplace is already occupied then we use another hash function
// h'(x) = ( h(x)  + f(i) ) % 10 where f(i) = i ^ 2, i = 0, 1, 2 ...

// from linn probing we see, keys form cluster or group of block
// for avoiding that we use new hash function that store the element at position square of i
// average successful time --> t = -log(1 - lambda) / lambda
// average unsuccessful time --> t = 1 / ( 1 - lambda )