/*
    Duplicates in an array 
    Given an array of n elements containing elements from 0 to n-1
    with any of these numbers appearing any number of times, 
    find these repeating numbers
*/
#include<bits/stdc++.h>
using namespace std;

/*Using the method of linked list cycle method and slow and fast pointer method*/

int find_duplicates(vector<int>&v){
    //initilaize the slow and fast pointer
    int slow = v[0];
    int fast = v[0];
    //move slow pointer by once and fast by twice while they collide
    do{
        slow = v[slow];
        fast = v[v[fast]];
    }while(slow!=fast);
    //keep slow as it is and move fast to the begining and do not follow tortise method now
    fast = v[0];
    //traverse while slow fast won't collide, and the element where they collide is the naswer
    while(slow!=fast){
        slow = v[slow];
        fast = v[fast];
    }
    //now slow and fast both are pointing the same element
    return slow;
}

int main(){
    vector<int> v = {2,5,9,6,9,3,8,9,7,1};
    cout<<"Repeating "<<find_duplicates(v);
    return 0;
}
