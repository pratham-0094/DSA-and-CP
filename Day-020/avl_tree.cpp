// avl tree are high balanced binary search tree
// it is balanced using balance factor
// balance factor = height of left subtree - height of right subtree
// bf = hl - hr
// it is calculated for every node of tree
// for every node balance factor must be { -1, 0, 1 }, this are the valid balance factor

// | bf | = | hl - hr | <= 1 balanced
// | bf | = | hl - hr |  > 1 imbalanced

// in avl tree every node should be balanced, otherwise we say the tree is imbalanced
// to balance a tree we perform rotation on tree

// rotation in avl tree
// LL - rotation |-------  
//                      |----  single rotation
// RR - rotation |-------  

// LR - rotation |-------
//                      |----  double rotation
// RL - rotation |-------  