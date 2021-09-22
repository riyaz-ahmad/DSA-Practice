/*
Given an array of distinct integers, 
find length of the longest subarray which contains numbers that can be arranged in a continuous sequence. 
Examples: 

Input:  arr[] = {10, 12, 11};
Output: Length of the longest contiguous subarray is 3

Input:  arr[] = {14, 12, 11, 20};
Output: Length of the longest contiguous subarray is 2
*/
#include<bits/stdc++.h>
using namespace std;

int maxLength(vector<int>&v){
    int n = v.size();
    int maxLen = 1;
    for(int i=0;i<n;i++){
        int mx = v[i];
        int mn = v[i];
        for(int j=i+1;j<n;j++){
            mx = max(v[j], mx);
            mn = min(v[j], mn);
            if(mx-mn == j-i)
                maxLen = max(maxLen, mx-mn+1);
        }
    }
    return maxLen;
}
int main(){
    vector<int> v {14, 12, 11, 20};
    vector<int> v3{10, 12, 11};
    vector<int> v2{1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
    cout<<maxLength(v)<<endl;
    cout<<maxLength(v2)<<endl;
    cout<<maxLength(v3)<<endl;
    return 0;
}