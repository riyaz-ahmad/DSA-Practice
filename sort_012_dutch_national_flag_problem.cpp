/*
    Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
    eg {0, 1, 0, 1,2 ,1}
    ans {0, 0, 1, 1, 1, 2}
*/
#include<bits/stdc++.h>
using namespace std;

//function for sorting
void sort_012(vector<int> & a){
    int low = 0, mid = 0, high = a.size()-1;
    while(mid<=high){
        switch(a[mid]){
            case 0:
                swap(a[low], a[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[mid], a[high]);
                high--;
                break;
        }
    }
}

int main(){
    vector<int> a;
    int n,e;
    cout<<"Enter size of array ";
    cin>>n;
    cout<<"Enter Array Elements "<<endl;
    for(int i=0; i<n;i++){
        cin>>e;
        a.push_back(e);
    }
    sort_012(a);

    for(int i=0; i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}