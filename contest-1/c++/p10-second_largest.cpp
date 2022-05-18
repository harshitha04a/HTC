// Given a set of numbers, find the second largest number in it and print its position from left.

#include <bits/stdc++.h>
using namespace std;

void findS(int arr[], int n)
{
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++) v.push_back({arr[i], i});
    
    sort(v.begin(), v.end());
    int max=0, maxi;
    int m=-1, mi=-1;
    for(auto x: v)
    {
        if(x.first>max)
        {
            maxi = max;
            mi = m;
            max = x.first;
            m = x.second;
        }
    }
    cout<<mi+1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    
    findS(arr, n);
    
    return 0;
}
