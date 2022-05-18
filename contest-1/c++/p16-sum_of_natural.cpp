// Given a number n, calculate the sum of first n natural values and print its value as the output.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; 
    cin>>n;
    cout<<(n*(n+1))/2;
    return 0;
}
