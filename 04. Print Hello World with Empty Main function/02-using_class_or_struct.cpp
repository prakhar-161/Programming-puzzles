#include<iostream>
using namespace std;


// Using std::cout/printf() 
// inside constructor of struct/class and 
// creating its object outside main() function.                 // IMPORTANT

class Func {
public:
    Func() {
        cout << "Hello World" << endl;
    }
} obj;

int main() {}