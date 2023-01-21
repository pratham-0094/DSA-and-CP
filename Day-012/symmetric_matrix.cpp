// 4. Symmetrix Matrix --> elements are symmetric
// [ 2 , 2 , 2 , 2 , 2 ]
// [ 2 , 3 , 3 , 3 , 3 ]
// [ 2 , 3 , 4 , 4 , 4 ]
// [ 2 , 3 , 4 , 5 , 5 ]
// [ 2 , 3 , 4 , 5 , 6 ]

// let M be a matrix then
// M[i,j]  =  M[j][i]    if i == j
// M[i,j] !=  M[j][i]   if i != j
// total number of element = n * n

// we have to store M[i][j] only
// so we can use either Upper Triangular or Lower Triangular Matrix