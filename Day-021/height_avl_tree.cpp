// if height is given, then
// max nodes  = 2 ^(h) - 1 , height starts from 1

//                          -------> 0, when h = 0
//                         |
// min nodes  N(h) = ------|-------> 1, when h = 1
//                         |
//                         -------> N(h - 2) + N(h - 1),  when h > 1

// if nodes is given, then
// min heigth  = log2(n + 1) , height starts from 1
// max height = same as min nodes or 1.44 * log2(n + 2)

// fibonacci series is a balanced series, such that
// f(i +1) / f(i) = 1.6 (approx)