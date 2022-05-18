// Find the largest number among given integers a, b, c.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b) a = b;
    if(a<c) a = c;
    
    cout<<a;
    return 0;
}
