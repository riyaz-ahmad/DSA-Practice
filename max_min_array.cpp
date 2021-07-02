#include <bits/stdc++.h>
using namespace std;


int main() {
    int a[] = {10,23,45,46,52,46};
    int max = a[0];
    int min = a[0];
    int size =  sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
	
	return 0;
}