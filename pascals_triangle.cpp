/*
    Pascal’s triangle is a triangular array of the binomial coefficients.
    Write a function that takes an integer value n as input and prints first n lines of the Pascal’s triangle.
                    1
                1       1
            1       2       1
        1       3       3       1
    1       4       6       4       1
*/

#include<bits/stdc++.h>
using namespace std;
/*
    This method is of Time Complexity of O(N^3)
*/
//function for calculating the bionomial cofficients
int binomialCoff(int n, int k){
    int res = 1;
    if(k>n-k)
        k = n-k;
    for(int i=0;i<k;i++){
        res *= (n-i);
        res /= (i+1);
    }
    return res;
}
//function for calculating the pascal traingle
void pascal(int n){
    //iterate through every line and print entries int it
    for(int line=0; line<n;line++){
        //every line has number of elements equal to that line number
        for(int i=0;i<=line; i++)
            cout<<binomialCoff(line, i)<<" ";
        cout<<endl;
    }
}

/*
    This method takes O(n^2) time complexity and O(1) Space Complexity
*/
void printPascal(int n){
    for(int line=1;line<=n;line++){
        int c = 1;
        for(int i=1;i<=line;i++){
            cout<<c<<" ";
            c = c * (line-i)/i;
        }
        cout<<endl;        
    }
}

int main(){
    cout<<"O(N^3 approach"<<endl;
    pascal(5);
    cout<<endl<<endl;
    cout<<"O(N^2 and space O(1) approach"<<endl;
    printPascal(5);
    return 0;
}