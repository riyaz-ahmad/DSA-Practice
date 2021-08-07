/*
    Merge two Sorted Arrays
        Given two sorted arrays, the task is to merge them in a sorted manner.
        Example
        Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
        Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> mergeSorted(vector<int> &v1, vector<int> &v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> v3(n+m);
    int i=0, j=0, k=0;
    //traverse both the arrays
    while(i<n && j<m){
        //check which one is greater and place at correct position in v3
        if(v1[i]<v2[j]){
            v3[k] = v1[i];
            k++;
            i++;
        }
        else{
            v3[k] = v2[j];
            k++;
            j++;
        }
    }
    //copy the remaining elements
    while (i<n)
        v3[k++] = v1[i++];
    while (j<m)
        v3[k++] = v2[j++];
    return v3;
}

int main(){
    vector<int> v1;
    vector<int> v2;
    v1 = {1,3,5,8};
    v2 = {2,4,8,9};
    vector<int> v3 = mergeSorted(v1, v2);
    for(int v:v3)
        cout<<v<<" ";
    cout<<endl;
    return 0;
}