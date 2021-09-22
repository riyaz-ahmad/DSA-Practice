#include<bits/stdc++.h>
using namespace std;
bool isTriplet(vector<int>& v){
    int n = v.size();
    for(int i=0;i<n;i++){
        v[i] = v[i]*v[i];
    }
    sort(v.begin(), v.end());

    for(int i=n-1;i>=2;i--){
        int l = 0;
        int r = i-1;
        while(l<r){
            if(v[l]+v[r]==v[i])
                return true;
            (v[l]+v[r]<v[i]?l++:r--);
        }
    }
    return false;
}
 int main(){
    // int n=10;
     vector<int> v { 3, 1, 4, 6, 5 };
     cout<<isTriplet(v);
     return 0;
 }