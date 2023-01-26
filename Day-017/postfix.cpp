// infix - a + b
// postix - + a b
// prerix - a b +

// what is the need of postfix?
// if we want to evaluate a expression then first we have to know the precedence of the operatot then start evalution, but for the precedence we have to scan te expression multiple times
// therefore postfix is used to evaluate a expression in single scan

// infix form
// 8 + 3 * (9 - 6) / 2 ^ 2 + 6 / 2
//   6   5    1    3   2   6    4
// precedence

// postfix form
// 8 3 9 6 - 2 ^ 2 / * + 6 2 / +
//         1   2   3 4 5     6 7
// precedence
// evaluation in single run

//  -----------------------------------------
//  |   symbol | precedence | associativity |
//  |----------|------------|---------------|
//  |    + -   |     1      |     L - R     |
//  |    / *   |     2      |     L - R     |
//  |     ^    |     3      |     R - L     |
//  |  - + !   |     4      |     R - L     | (all unary operators)
//  |  log *   |            |               | 
//  |    ( )   |     5      |     L - R     |
//  -----------------------------------------

// = operator associativity is R - L

// compiler need fully parenthesised expression to evaluate it
// if we not provide it, then compiler add parenthesis according to precedence and associativity
// if we have more than one same operator then we should use precedence as the have same precedence, then we should check the associativity
// if precedence are equal then look at the associativity