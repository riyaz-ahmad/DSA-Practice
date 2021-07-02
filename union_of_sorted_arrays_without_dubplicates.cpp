/*
    *Union of two sorted arrays
*/

#include <iostream>
using namespace std;

int do_union(int a[], int b[], int n, int m){
    int i=0, j=0,c=0;
    while(i<n && j<m){
        
        //if a[i] < b[j] , print a[i] and do i++
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
            c++;
        }
        //if a[i] > b[j] , print b[i] and do j++
        else if(a[i] > b[j]){
            cout<<b[j]<<" ";
            j++;
            c++;
        }
        //if both are equal print any one of them, and do i++, and j++
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
            c++;
        }
    }
    
    //print the remaining elements from the a[]
    while(i<n){
        cout<<a[i]<<" ";
        i++;
        c++;
    }
    //print the remaiing elements fro  the array b[]
    while(j<m){
        cout<<b[j]<<" ";
        j++;
        c++;
    }
    return c;
    
}

int main() {
	int n , m;
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 2, 3};
	n = sizeof(a)/sizeof(a[0]);
	m = sizeof(b)/sizeof(b[0]);
	int c = do_union(a,b,n,m);
	cout<<endl;
	cout<<c<<endl;
	return 0;
}