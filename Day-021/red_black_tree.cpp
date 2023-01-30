// Red Black Tree --> height balanced binary search tree, similar to 2-3-4
// every node is either red or black and root of tree is black
// NULL is also black
// number of black on path from root to leaf are same
// no two consecutive Red, Parent and children of Red are black
// new inserted node is red
// height --> logn <= h <= 2 * logn

// new node is red so there is red conflict
// we have to do some adjustments for making it as a balance red black tree
// 1. recoloring --> uncle is red
// 2. rotation --> uncle is black

// deletion is same as binary search trees