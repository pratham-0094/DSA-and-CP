// strict binary tree - the binary tree having 0 and 2 degree but not 1 degree, this means every non-leaf node has 2 child node

// if height of binary tree is h then,
// min number of nodes n = 2h + 1
// max number of nodes n = 2^(h + 1) - 1

// if number of node in a binary tree is n then,
// min height h = (n - 1) / 2
// max height h = log2(n+1) - 1

// height of strict binary tree
// log2(n+1) - 1 <= h <= n-1/2
// range :- O(logn) - O(n)

// number of nodes in a strict binary tree
// 2h+1 <= n <= 2^(h + 1) - 1
// range :- O(n) - O(2^n)

// internal node vs external node
// deg(0) = deg(2) + 1