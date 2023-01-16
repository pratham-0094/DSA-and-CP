// Row Major -->
// Two dimensional array stored iin contigious momoery linearily
// it stored row wise in memory, so first row with elements stored then,
// second row after where element of first row ends

// let an 2-d array
// int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

// memory it will look like
//  ---------------------------------------------------
// | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |
//  ---------------------------------------------------
// |   row 1       |     row 2     |      row 3      |

// so for accessing the elements -->
// Addr(A[1][2]) = Base Address + [ 1 * 4 + 2 ] * sizeof(int)
// Addr(A[2][3]) = Base Address + [ 2 * 4 + 3 ] * sizeof(int)
// simmilarily,
// for array A[m][n]
// Addr(A[i][j]) = Base Address + [ i * n + j ] * sizeof(int)
// where i and j be index of element that we want and n is total no. of columns

// Column Major -->
// it stored column wise in memory, so first column with elements stored then,
// second column after where element of first column ends

// let an 2-d array
// int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

// memory it will look like
//  ---------------------------------------------------
// | 1 | 5 | 9 | 2 | 6 | 10 | 3 | 7 | 11 | 4 | 8 | 12 |
//  ---------------------------------------------------
// | column 1 |  column 2  |  column 3  |  column 4  |

// so for accessing the elements -->
// Addr(A[1][2]) = Base Address + [ 2 * 3 + 1 ] * sizeof(int)
// Addr(A[1][3]) = Base Address + [ 3 * 3 + 1 ] * sizeof(int)
// simmilarily,
// for array A[m][n]
// Addr(A[i][j]) = Base Address + [ j * m + i ] * sizeof(int)
// where i and j be index of element that we want and m is total no. of rows

// Note :- number of operation are same so in terms of time, both are equally efficient

// Simmilarily for nd array --> Addr(A[d1][d2][d3][d4])
// Row Major
// Addr(A[i1][i2][i3][i4]) = Base Address + [ i1 * d2 * d3 * d4 + i2 * d3 * d4 + i3 * d4 + i4 ] * sizeof(int)
//                                n          n
//                         = Lo + E [ i(p) * E [d(q)]] * w
//                               p = 1    q = p + 1

// Column Major
// Addr(A[i1][i2][i3][i4]) = Base Address + [ i4 * d1 * d2 * d3 + i3 * d1 * d2 + i2 * d1 + i1 ] * sizeof(int)
//                                n        p - 1
//                         = Lo + E [ i(p) * E [d(q)]] * w
//                               p = 1    q = 1

// for 4 - d we have no.of multiplication = 3 + 2 + 1
// simmilarily for "n", we have no. of multiplication = n - 1 + n - 2 + n - 3 + ..... + 1 = n*(n-1) / 2
// Time Complexity --> O(n^2)

// Reducing no. of multiplication -->
// i4 + i3 * d4 + i2 * d3 * d4 + i1 * d2 * d3 * d4
// i4 + d4 [ i3 + i2 * d3 + i1 * d2 * d3 ]
// i4 + d4 * [ i3 + d3 * [i2 + i1 * d2 ] ]

// for 4-d we have "3" multiplication
// so for "n" dimension we have (n - 1) multiplication
// Time Complexity-- > O(n)

// This is Honrner's Rule --> used to reduce no. of multiplications