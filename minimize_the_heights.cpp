#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int getMinDiff(int arr[], int n, int k)
    	{
        	sort(arr, arr + n);
		int minE, maxE;
        	int res = arr[n-1] - arr[0];
        
        	for(int i=1;i<n;i++){
            		if(arr[i]>=k && arr[n-1]>=k){
             		   maxE = max(arr[i - 1] + k, arr[n - 1] - k);
             		   minE = min(arr[0] + k, arr[i] - k);        
              		   res = min(res, maxE - minE);
           		 }
       
       		}
        	return res;
    	}
};
int main()
{
    int t = 1;
 
    while (t--) {
        int k = 6;
        int n = 3;
        int arr[n] = { 1, 15, 10 };
 
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}