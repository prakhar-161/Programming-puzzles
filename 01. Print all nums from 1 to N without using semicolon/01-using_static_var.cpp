#include<bits/stdc++.h>
using namespace std;

#define N 30

// Method - 1

// USING STATIC VARIABLE IN RECURSIVE MAIN() FUNCTION

// Static variables in a Function: 
// When a variable is declared as static, space for it gets allocated for the lifetime of the program. 
// Even if the function is called multiple times, space for the static variable is allocated only once 
// and the value of the variable in the previous call gets carried through the next function call.

int main() {
    static int n = 1;
    if(cout << n << " " && n++ < N && main()) {}
}
