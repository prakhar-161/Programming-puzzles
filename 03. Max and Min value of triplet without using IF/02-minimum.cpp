#include<bits/stdc++.h>
using namespace std;

int mini(int a, int b) {
    int comparator[] = {a, b};
    return comparator[a > b];
}

int minimum(int a, int b, int c) {
    return mini(a, mini(b, c));
}

int main() {
    cout << minimum(6, 3, 9) << endl;

    return 0;
}