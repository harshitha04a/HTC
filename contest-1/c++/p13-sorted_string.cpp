// Write a program to check whether the input string is sorted or not and print ‘yes’ if sorted and ‘no’ in either case.

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string arr;
    cin>>arr;
    string crr = arr;
    sort(arr.begin(), arr.end());
    if(crr == arr) cout<<"yes";
    else cout<<"no";
    return 0;
}
