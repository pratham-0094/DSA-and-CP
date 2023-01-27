// we can represent a tree using
// 1. array
// we have to maintain parent and child relationship so that we can produce a tree again
// store element level by level

// if an element is at index 'i', then
// left child = 2 * i
// left child = 2 * i + 1
// parent = i / 2

// 2. linked list
// struct node
// {
//     struct node *lchild;
//     int data;
//     struct node *rchild;
// }

// each node has data and pointer to left and right child
// no. of nodes + 1 = no. of NULL