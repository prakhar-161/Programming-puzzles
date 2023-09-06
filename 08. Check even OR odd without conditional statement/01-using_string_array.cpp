#include<bits/stdc++.h>
using namespace std;

// The idea is to use the modulo operator or LSB to determine if a number is even or odd
// Instead of using a conditional statement to output odd/even, we can use a string array index 

int main() {
    int n = 6;
    string arr[] = {"even", "odd"};

    cout << arr[n & 1];

    return 0;
}