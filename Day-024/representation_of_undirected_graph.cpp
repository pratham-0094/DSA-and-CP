// graph can be represented using -
// adjacency matrix
// adjacency list
// compact list

// G = (V, E)
// |V| = n = 5
// |E| = e = 3

// adjacency matrix
// n*n martix is created
// let i, j be two vertex
// if their is edge between i and j then a[i][j] = 1, otherwise 0
// complexity - O(n^2)
// | 0, 1, 1, 1, 0 |
// | 1, 0, 1, 0, 0 |
// | 1, 1, 0, 1, 1 |
// | 1, 0, 1, 0, 1 |
// | 0, 0, 1, 1, 0 |
// it their are cost assign to each edge then to represent those inplace to writing 1 we can write weight
// this is known as cost adjacency matrix

// adjacency list
// array of linked list of size n is created
// each location represent a vertex
// they represent all the vertex connected
// complexity - O(n+2e) - O(n)
//    |      |          ---- ----        ---- ----
//    |  1   |         |  5 | * | --->  |  4 | * | --->  Null
//    |------|          ---- ----        ---- ----
//    |      |          ---- ----
//    |  2   |         |  5 | * | --->  Null
//    |------|          ---- ----
//    |      |          ---- ----        ---- ----
//    |  3   |         |  1 | * | --->  |  10 | * | --->  Null
//    |------|          ---- ----        ---- ----
// to represent weight we can add a weight collum in linked list along with vertex and next pointer
// this is known as cost adjacency list

// compact list
// here graph can be represented using single dimensional array
// size - n + 2e + 1
// take array of given size
// don't take index 0 then first n space indicate vertex
// complexity - O(n+2e) - O(n)
//  -----------------------------------------------------------------------------------------------
// | x | 7 | 10 | 4 | 5 | 6 | 21 | 2 | 3 | 4 | 1  | 3 |  1 | 2 | 3  | 4  | 1  | 3  | 5  | 3  |  4 |
//  -----------------------------------------------------------------------------------------------
//   0   1    2   3   4   5    6   7   8   9   10  11   12  13   14   15   16   17   18   19   20
// index 1 means vertex 1 it hold value 7 this means the vertex 1 adjacent vertex are from index 7 that is 2, 3, 4 it go untill 9 as vertex 2 adjacent vertex start from 10 and so on nad at index n + 1 we store the size of array