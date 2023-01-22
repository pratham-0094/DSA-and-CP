// Sparse Matrix --> no. of non-zero elements are more
// For storing non-zero elements
// we can use coordiante list or 3-column representation and compresses spar's row

// [ 0 , 2 , 0 , 0 , 2 ]
// [ 2 , 0 , 0 , 4 , 0 ]
// [ 1 , 0 , 0 , 0 , 0 ]
// [ 0 , 0 , 0 , 0 , 0 ]
// [ 0 , 0 , 5 , 0 , 0 ]
// [ 0 , 0 , 0 , 3 , 0 ]
// [ 0 , 0 , 0 , 0 , 7 ]

// 1. Coordinate list
// for every elements we need its row and column numbers and its value

// row     |     column     |     element
// --------|----------------|-------------------
//   0     |       1       |        2
//   1     |       0       |        2
// and so on

// 2. Compressed spar's row
// we use three arrays
// first is list of non-zero elements
// A[2, 2, 2, 4, 1, 5, 3, 7]

// and second is array of rows where first eleent is zero as our index in matrix start from "1"
// IA[0, 2, 4, .....]
// first row has 2 elements then second row has 2 elements has also adding previos elements

// and thirs is array of columns
// JA[2, 5, 1, 4, 1, 3, 4, 5]

// in matrix we require 7 x 5 x 2 bytes = 70 bytes
// but now, 8 + 8 + 9 =25 x 2 bytes = 50 bytes

