#include<bits/stdc++.h>
using namespace std;


int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max_so_far = INT_MIN;
        int max_ending_here = 0;
        
        for(int i=0;i<n;i++){
            if (arr[i] <= max_ending_here + arr[i]) {
                max_ending_here += arr[i];
            else
                max_ending_here = arr[i];
            if (max_ending_here > max_so_far)
                max_so_far = max_ending_here;
        }
        return max_so_far;
        
    }

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}