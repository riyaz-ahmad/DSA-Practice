#include <bits/stdc++.h>
using namespace std;


int main() {
  
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, c0=0, c1=0, c2=0;
    for(i=0;i<n;i++){
        switch(arr[i]){
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
        }
    }
    i=0;
    while(c0>0){
        arr[i++] = 0;
        c0--;
    }
        while(c1>0){
        arr[i++] = 1;
        c1--;
    }
        while(c2>0){
        arr[i++] = 2;
        c2--;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
	return 0;
}