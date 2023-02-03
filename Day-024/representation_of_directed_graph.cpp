// graph can be represented using -
// adjacency matrix
// adjacency list
// compact list

// G = (V, E)
// |V| = n = 4
// |E| = e = 5

// adjacency matrix
// n*n martix is created
// let i, j be two vertex
// if their is edge between i and j then a[i][j] = 1, otherwise 0
// complexity - O(n^2)
// | 0, 1, 0, 1 |
// | 0, 0, 1, 0 |
// | 1, 0, 0, 0 |
// | 0, 0, 1, 0 |

// adjacency list
// array of linked list of size n is created
// each location represent a vertex
// they represent all the vertex connected
// complexity - O(n+e) - O(n)
//    |      |          ---- ----        ---- ----
//    |  1   | --->    |  2 | * | --->  |  4 | * | --->  Null
//    |------|          ---- ----        ---- ----
//    |      |          ---- ----
//    |  2   | --->    |  3 | * | --->  Null
//    |------|          ---- ----
//    |      | --->    ---- ----
//    |  3   |         |  1 | * | --->  Null
//    |------|         ---- ----

// inverse adjacency list
// array of linked list of size n is created
// each location represent a vertex
// they represent from which vertex we can reach it
// complexity - O(n+e) - O(n)
//    |      |          ---- ----
//    |  1   | --->    |  3 | * | --->  Null
//    |------|          ---- ----
//    |      |          ---- ----
//    |  2   | --->    |  1 | * | --->  Null
//    |------|          ---- ----
//    |      | --->     ---- ----        ---- ----
//    |  3   |         |  2 | * | --->  |  4 | * | --->  Null
//    |------|          ---- ----        ---- ----