#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    // if (x == y)  -> x ^ y = 0
    if(x != y) {
        x = x ^ y;
        y = x ^ y;
        y = x ^ y;
    }
}

int main() {
    int x = 3, y = 4;
    swap(x, y);

    cout << x << " " << y;

    return 0;
}