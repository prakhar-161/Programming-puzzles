#include<bits/stdc++.h>
using namespace std;

int mul(int a, int b) {
    if(a == 0 || b == 0) return 0;
    if(b == 1) return a;
    if(a == 1) return b;

    int ans = 0;
    for(int i=b; i>=1; i--) {
        ans += a;
    } 

    return ans;
}

int multiply(int a, int b) {
    int m = mul(a, abs(b));
    return (b < 0) ? -m : m;
}

int main() {
    cout << multiply(3, 4) << " " << multiply(-3, -4) << " "
         << multiply(-3, 4) << " " << multiply(3, -4);
 
    return 0;
}