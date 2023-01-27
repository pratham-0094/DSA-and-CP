// Tree --> collection of node 'n' and edges 'n - 1'
// one node is root node
// rest of node are divided into disjoint subset
// each subset is tree again
// all nodes below that nodes is said to be subtree

// terminolgy -->
// 1. root
// first node on the top

// 2. parent and child
// the node is parent to very next descendent or those children,
// which are connected with just one edge

// 3. siblings
// nodes that are children of same parent are sibling to each other

// 4. descendents
// set of particular nodes that can be reached from particular node

// 5. ancestors
// from that node to root node, the node that come in path are ancestors node

// 6. degree of a node
// no. of direct children

// 7. internal (non-leaf) (non-terminal) / external (leaf) (terminal) nodes
// degree is zero then it is leaf node, otherwise non-leaf node

// 8. level
// root is at level 1 then, its children is at level 2, then its children at level 3, and so on.
// we count no. of nodes from root

// 10. height
// root is at height 0, then its children's height is 1, and so on.
// we count no. of edges from root

// 11. forest
// a collection of trees is called as forest