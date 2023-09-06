#include<bits/stdc++.h>
using namespace std;

#define N 20

// Since, we have to print the numbers without using semicolon
// we would have to using if statement or the while loop

int main() {
    int n = 1;
    while(cout << n << " " && n++ < N) {}
}

int main() {
    int n = 0;
    while(n++ < N) {
        if(cout << n << " ") {}
    }
}


// from N to 1
int main() {
    int n = N;
    while(n > 0) {
        if(cout << n-- << " ") {}
    }
}