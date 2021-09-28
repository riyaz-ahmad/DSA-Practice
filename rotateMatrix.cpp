#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &v){

    //transpose of the the matrix
    int n = v.size();
    for(int i =0;i<n;i++ ){
        for(int j=0;j<i;j++)
            swap(v[i][j], v[j][i]);
    }
    // reverse each row
    for(int i=0;i<v[i].size()-1;i++)
        reverse(v[i].begin(), v[i].end());
    
    //print
    for(int i =0;i<v.size();i++ ){
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
    cout<<endl;
    }

}

int main(){
    vector<vector<int>> v = {
        {1,2,3},
        {4,5,6},
        {7,8,9}

    };
    
    cout<<"Befoore Roation"<<endl;
    for(int i =0;i<v.size();i++ ){
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
    cout<<endl;
    }
    cout<<"After Roation"<<endl;
    rotate(v);
    return 0;
}