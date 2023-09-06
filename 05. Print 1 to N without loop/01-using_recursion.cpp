#include<iostream>
using namespace std;

#define N 100

// Using separate function and recursion
void print(int n) {
    if(n <= 0) return;

    print(n-1);
    cout << n << " ";
}

int main() {
    print(N);
    return 0;
}

// Using short circuiting
void print(int n) {
    n && (print(n-1), cout << n << " ");
}

int main() {
    print(N);
    return 0;
}