// Write a program to print all the factors of a given input number.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n; 
    for(int i=1; i<=n; i++)
    {
        if(n%i==0) cout<<i<<" ";
    }
    return 0;
}
