#include <iostream>
using namespace std;

void move_neg_pos(int a[], int n){
    int j = 0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(i!=j)
                swap(a[i], a[j]);
            j++;
        }
    }
}

int main() {
    int a[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
        cout <<a[i]<<" " ;
    cout<<endl;
    move_neg_pos(a, n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
	return 0;
}