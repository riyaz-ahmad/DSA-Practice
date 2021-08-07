/*
    Merge two Sorted Arrays with O(1) extra space
        Given two sorted arrays, the task is to merge them in a sorted manner.
        Example
        Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
        Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}
*/

#include<bits/stdc++.h>
using namespace std;

void mergeSorted(vector<int>&v1, vector<int>&v2){
    int n = v1.size();
    int m = v2.size();
    //traverse the vector v1
    for(int i=0;i<n;i++){
        //compare the elements of v1 with v2[0]
        if(v1[i]>v2[0]){
            //swap the two
            swap(v1[i], v2[0]);
            //sort the v2 by storing the v2[0] in a temp variable
            int first_ele = v2[0];
            int k;
            for(k=1;k<m && v2[k]<first_ele; k++)
                v2[k-1] = v2[k];
            v2[k-1] = first_ele;
        }
    }
        //read v1 and v2
        for(auto v:v1)
            cout<<v<<" ";
        for(auto v:v2)
            cout<<v<<" ";
    
}

int main(){
    vector<int> v1;
    vector<int> v2;
    v1 = {1,3,5,8};
    v2 = {2,4,8,9};
    mergeSorted(v1,v2);
    return 0;
}
