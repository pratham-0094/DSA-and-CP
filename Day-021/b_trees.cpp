// b-tree / m-way / multiway search tree - multiple key and children

// B-tree rules
// all leaf node at same level
// every node must be n / 2 children
// in insertion, binary tree goes downwards but the b-tree goes upwards so that it can balanced the tree height

// it is use in database because when we access the node we get more value at once, in binary tree each node have just one value
// going to next node - indirect access
// within same node - direct access
// benefit is in direct access we get more than one value at once so it is litle faster than binary search tree
// if we use binary tree then the height of the tree is very big but in b-tree it is smaller

// 2-3 trees are balanced, searched tree
// it is B-tree with degree 3
// 2-3 tree is a type of b-tree, for studying b-tree 2-3 tree us as an example
// each node can have 2 or 3 children

// if height of 2-3 tree is h then,
// min number of nodes n = h + 1
// max number of nodes n = 3^(h - 1) / h - 1

// if number of node in a 2-3 tree is n then,
// min height h = log3(n(3 - 1) + 1) - 1 = log3(n)
// max height h = log2(n-1) - 1

// 2-3-4 trees are balanced, searched tree
// it is B-tree with degree 4
// each node can have 2, 3 or 4 children
