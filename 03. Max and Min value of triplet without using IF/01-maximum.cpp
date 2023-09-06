#include<bits/stdc++.h>
using namespace std;

int maxi(int a, int b) {
    int comparator[] = {a, b};
    return comparator[a < b];
}

int maximum(int a, int b, int c) {
    return maxi(a, maxi(b, c));
}

int main() {
    cout << maximum(6, 3, 9) << endl;

    return 0;
}