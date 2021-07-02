

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,e,a,k;
    cin>>n;
    int arr[n];
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++)
         pq.push(arr[i]);
   
    cin>>k;
    int j=1;
    while(!pq.empty()){
        if(j==k){
            a = pq.top();
            break;
        }
        j++;
        pq.pop();
    }
    cout<<a<<endl;
    return 0;
}