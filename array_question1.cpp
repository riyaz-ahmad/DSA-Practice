#include<bits/stdc++.h>
using namespace std;

vector<int> printCom(vector<int>&v1, vector<int>&v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> ans;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v1[i]<v2[j]){
                ans.push_back(v1[i]);
                ans.push_back(v1[i]);
            }
                
        }
    }
    return ans;
}

int main(){
    vector<int> v1{2,4,6,8};
    vector<int> v2{3,1,5,7};
    vector<int> v3;
    v3 = printCom(v1,v2);
    for(auto v:v3)
        cout<<v<<" ";

    return 0;
}