// unlabeled node - empty node, labelling is not their
// labeled node -

// for unlabelled node
// T(n) = 2nCn / n + 1 ( this is the famous formula known as catalan number )
// number of tree having max height = 2^n
// another formula for catalan number
// T(n) = summation i =1 to n | T(i-1) * T(n-i)

// for labelled node
// T(n) = ( 2nCn / n + 1 ) * n! or catalan number * n!
//                    ^                             ^
//                    |                             |
//                  shape                         filling
