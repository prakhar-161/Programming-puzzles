#include <iostream>
using namespace std;
 
int minimum(int a, int b)
{
    int min = (a > b) * b + (b > a) * a;
 
    return min;
}
 
int main()
{
    printf("The minimum number is %d", minimum(-8, 9));
 
    return 0;
}
