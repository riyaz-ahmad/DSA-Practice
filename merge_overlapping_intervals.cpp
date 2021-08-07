/*
    Merge Overlapping Intervals
    Given a set of time intervals in any order, merge all overlapping intervals into one and output the result which should have only mutually exclusive intervals. Let the intervals be represented as pairs of integers for simplicity. 
    For example, let the given set of intervals be {{1,3}, {2,4}, {5,7}, {6,8}}. 
    The intervals {1,3} and {2,4} overlap with each other, so they should be merged and become {1, 4}. 
    Similarly, {5, 7} and {6, 8} should be merged and become {5, 8}
    answer = {{1,4}, {5,8}}
*/
#include<bits/stdc++.h>
using namespace std;

//creating an interval
struct Interval{
    int start, end;
};

//function u to compare two intervals accorind to their start and is used in sort fxn
bool compareIntervels(Interval i1, Interval i2){
    return(i1.start<i2.start);
}

//function for overlapping the intervals
void overlapIntervals(Interval arr[], int n){
    //if there is only one interval
    if(n<=0)
        return;
    //create an empty stackof interval
    stack<Interval> s;
    
    //sort the intervals in increasung order of their start time
    sort(arr, arr+n, compareIntervels);

    //push first interval into the stack
    s.push(arr[0]);
    //start from the next interval and check if they may get overlapped
    for(int i=1;i<n;i++){
        //get the top interval from the stack
        Interval top = s.top();
        //if it does not overlap push into the stact
        if(top.end < arr[i].start)
            s.push(arr[i]);
        //otherwise perform the overlapping
        else if(top.end<arr[i].end){
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }

    //print the contents of stack
    while(!s.empty()){
        Interval t = s.top();
        cout<<"["<<t.start<<","<<t.end<<"], ";
        s.pop();
    }
    return;
}

int main(){
    Interval arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
    int n = sizeof(arr)/sizeof(arr[0]);
    overlapIntervals(arr, n);
    return 0;
}