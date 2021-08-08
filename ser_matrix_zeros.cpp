/*
    Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.
     eg     1 1 1               1 0 1
            1 0 1       ----->  0 0 0
            1 1 1               1 0 1
*/
#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 4
void setZeros(bool mat[R][C]){
    bool row[R];
    bool col[C];
    //initialize all values of row and col to zero
    for(int i=0;i<R;i++)
        row[i] = 1;
    for(int i=0;i<C;i++)
        col[i] = 1;
    //storev row and col matrices elements
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(mat[i][j] == 0){
                row[i] = 0;
                col[j] = 0;
            }
        }
    }
    //modify the input matrix using the col and row matrices
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(row[i]==0 || col[j]==0){
                mat[i][j] = 0;
            }
        }
    }
}

/* print two d matrix*/
void print(bool mat[R][C]){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    bool mat[R][C] = { {1, 1, 1, 1},
                       {1, 0, 1, 1},
                       {1, 1, 1, 1}};
    print(mat);
    setZeros(mat);
    cout<<endl<<"After Setting the zeros"<<endl;
    print(mat);
    return 0;
}