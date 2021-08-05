/*
Given an integer array nums and a target element, return the indices of two elements 
such that they add up to the target element.
eg nums = [2,7,8,9] and target =10
ans = [o,2] as 0->2 and 2->8 => 2+8 = 10
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> to_sum(vector<int> &nums, int target){
    vector<int> ans;
    unordered_map<int, int> ump;
    for(int i=0; i<nums.size(); i++){
        if(ump.find(target-nums[i]) != ump.end()){
            ans.push_back(ump[target-nums[i]+1]);
            ans.push_back(i+1);
            return ans;
        }
        ump[nums[i]] = i;
    }
    return ans;
}

int main(){
    vector<int>nums(5);
    int target = 14;
    for(int i=0;i<5;i++)
    	cin>>nums[i];
    for(auto i:to_sum(nums, target))
        cout<<i<<" ";
    
    /*for(int i=0; i<nums.size(); i++){
       for(int j=i+1;j<nums.size();j++){
            if(target-nums[i]==nums[j])
                cout<<i<<" "<<j<<endl;
            else   
                cout<<0<<" "<<0<<endl;
       }
   }
    return 0;*/
    
}
