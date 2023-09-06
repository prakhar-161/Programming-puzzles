#include<iostream>
using namespace std;

// We can take advantage of short-circuiting in boolean expressions.
// We know that in boolean AND operation such as x && y, y is evaluated only if x is true.

// If x is false, then y is not evaluated because the whole expression would become false, 
// which can be deduced without even evaluating y. 

// Similarly, for boolean OR operation such as x || y, y is evaluated only if x is false. If x is true, then y is not evaluated. 
// This is called short-circuiting in boolean expressions.

// We can apply this logic to solve a given problem. Consider the following code snippet:

// ((n & 1) && printf("odd")) || printf("even");

// Initially, check if n is odd or even. If n is odd, the first subexpression of AND becomes true, and 
// its second subexpression printf("odd") gets evaluated. 
// Otherwise, if n is even, the first subexpression of OR will become false, and i
// ts second subexpression printf("even") gets evaluated.

int main()
{
    int n = 6;
    ((n & 1) && cout << "odd" << " ") || cout << "even" << " ";
 
    return 0;
}