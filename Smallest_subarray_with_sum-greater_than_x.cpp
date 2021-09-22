/*
Given an array of integers and a number x, 
find the smallest subarray with sum greater than the given value. 

Examples:
arr[] = {1, 4, 45, 6, 0, 19}
   x  =  51
Output: 3
Minimum length subarray is {4, 45, 6}
*/
#include<bits/stdc++.h>
using namespace std;

int subarrayLength(int a[], int n, int x){
    //initilase min_len to n+1
    int min_len = n+1;
    //traverse the array
    for(int start = 0; start<n; start++){
        //initialize current sum with first element
        int curr_sum = a[start];
        //if first element is greater
        if(curr_sum>x) return 1;
        //check for different end points
        for(int end=start+1; end<n;end++){
            //add the element to curr_sum
            curr_sum += a[end];
            //for updating min length
            if(curr_sum>x and (end-start+1)<min_len)
                min_len = end-start+1;
        }
    }
    return min_len;
}
int main(){
    int a[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = sizeof(a)/sizeof(a[0]);
    cout<<subarrayLength(a,n,x);
    return 0;
}