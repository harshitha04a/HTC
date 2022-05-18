// Given two numbers a and b, such that a < b, print all the multiples of a which are less than b.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    cin>>a>>b;
    for(int i=1; i*a<b; i++)
    {
        cout<<a*i<<" ";
    }
    return 0;
}
