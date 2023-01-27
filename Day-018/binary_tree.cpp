// Binary tree --> tree of degree 2, or maximum of two childrens (either left or right or both left and right)

// left skewed binary tree --> only have left children
// right skewed binary tree --> only have right children

// if height of binary tree is h then,
// min number of nodes n = h + 1
// max number of nodes n = 2^(h + 1) - 1

// if number of node in a binary tree is n then,
// min height h = n - 1
// max height h = log2(n+1) - 1

// height of binary tree
// log2(n+1) - 1 <= h <= n-1
// range :- O(logn) - O(n)

// number of nodes in a binary tree
// h+1 <= n <= 2^(h + 1) - 1
// range :- O(n) - O(2^n)

// internal node vs external node
// deg(0) = deg(2) + 1