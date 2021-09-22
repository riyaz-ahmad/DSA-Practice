/*
Given a sorted array (sorted in non-decreasing order) of positive numbers, 
find the smallest positive integer value that cannot be represented as sum of elements of any subset of given set. 
Expected time complexity is O(n).
Examples: 
 

Input:  arr[] = {1, 3, 6, 10, 11, 15};
Output: 2

Input:  arr[] = {1, 1, 1, 1};
Output: 5

Input:  arr[] = {1, 1, 3, 4};
Output: 10

Input:  arr[] = {1, 2, 5, 10, 20, 40};
Output: 4
*/

#include<bits/stdc++.h>
using namespace std;

int findsmallest(vector<int>&v){
    int res = 1;//result variable stored in res
    for(int i=0;i<v.size();i++){
        //check if v[i] <= res, then increment the res bi v[i]
        if(v[i]<=res)
            res = res+v[i];
    }
    return res;
}

int main(){
    vector<int> v{1, 3, 6, 10, 11, 15};
    vector<int> v2{1, 1, 1, 1};
    vector<int> v3{1, 1, 3, 4};
    cout<<findsmallest(v)<<endl;
    cout<<findsmallest(v2)<<endl;
    cout<<findsmallest(v3)<<endl;
    return 0;
}