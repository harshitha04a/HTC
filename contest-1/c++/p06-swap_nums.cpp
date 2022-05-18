// Write a program to swap the first and last index values of the array.

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
        cin>>arr[i];
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}
