// comparsion required for searching an element -->
// 1 + 1 * 2 + 2 * 4 + ...   each required 1 comparison but the tree has 2 possible options
// 1 + 1 * 2^1 + 2 * 2^2 + ...
// 1 + i * 2^i + i * 2^i + ...
//  logn
//   E (i * 2^i) = logn * 2^logn / n = logn * n^log2 / n = logn * n / n = logn
// i = 1

// Average case analysion -->

// i) successful search
// for successful search, we count the internal nodes
// by counting the edges each required --> path +1
// let "I" be the sum of path of internal nodes representing successful search
// let "E" be the sum of path of external nodes representing unsuccessful search
// there is relationship between "I" and "E", such that
// E = I + 2 * n

// and no. of external nodes = no. of internal nodes + 1
// e = i + 1

// so, average successful search time = 1 + total path of internal nodes / no. of nodes
// Avg = 1 + I / n
// so, average unsuccessful search time = total path of external nodes / (no. of nodes + 1)
// Avg = E / (n + 1)

// As, E = n * logn  external nodes are at same height or (n + 1) * log(n +1) or n * logn
// putiing in above equations -->
// Avg = n * logn / (n + 1) = n * logn / n = logn    for unsuccessful search

// simmilarily, for successful search
// Avg = 1 + I / n = 1 + (E - 2n) / n = 1 + E/n + 2 = 3 + n * logn / n = 3 + logn = logn