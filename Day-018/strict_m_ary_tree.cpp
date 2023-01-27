// m-ary trees --> 'm' is degree of tree, or maximum number of children a node have
// strict m-ary tree - the m-ary tree having 0 and m degree but not other degree, this means every non-leaf node has m child node

// if height of m-ary tree is h and m is the degree of the tree then,
// min number of nodes n = mh + 1
// max number of nodes n = m^(h + 1) - 1 / m - 1

// if number of node in a m-ary tree is n and m is the degree of the tree then,
// min height h = (n - 1) / m
// max height h = logm(n(m-1)+1) - 1

// height of strict binary tree
// logm(n(m-1)+1) - 1 <= h <= n-1/m

// number of nodes in a strict binary tree
// mh+1 <= n <= m^(h + 1) - 1 / m - 1

// internal node vs external node
// deg(0) = 2 * deg(2) + 1