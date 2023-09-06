#include<iostream>
using namespace std;

int minimum(int a, int b) {
    int arr[] = {a, b};

    return arr[a > b];
}

int main() {
    cout << "the minimum number is: " << minimum(-8,9);
    return 0;
}