/*
Missing and Repeating
Given an unsorted array of size n. Array elements are in the range from 1 to n. 
One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.
*/

#include<bits/stdc++.h>
using namespace std;

/* Approach 1: Using Count Array
void mis_rep(vector<int>&a, int n){
    int an1, an2;
    vector<int> temp(n);
    for(int i=0; i<n;i++){
        temp[a[i]]++;       
    }
    for(int i=1;i<=n;i++){
        //for checking the repeating
        if(temp[i]>1)
            an1 = i;
        //for checking the missing one
        if(temp[i]==0)
            an2 = i;
    }
    cout<<"Repeating "<<an1<<" Missing "<<an2;
}
*/
/* Approach 2*/
void mis_rep(vector<int>&a, int n){

}


int main(){
    
    vector<int> a = {2,3,1,1,4,6};
    int n = a.size();
    mis_rep(a, n);
    return 0;
}