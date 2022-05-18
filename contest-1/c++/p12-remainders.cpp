// Given two numbers n and m, print all the remainders of n when divided by the numbers from 1 to m in a single line.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
        cout<<n%i<<" ";
    return 0;
}
