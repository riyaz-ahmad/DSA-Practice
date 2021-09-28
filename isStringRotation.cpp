/*
Given a string s1 and a string s2, write a snippet to say whether s2 is a rotation of s1? 
(eg given s1 = ABCD and s2 = CDAB, return true, given s1 = ABCD, and s2 = ACBD , return false)
*/
#include<bits/stdc++.h>
using namespace std;

bool isRotation(string s1, string s2){
    if(s1.length() != s2.length())
        return false;
    string temp = s1+s2;
    return(temp.find(s2) != string::npos);
}

bool check_rotation(string s, string goal)
{
    if (s.size() != goal.size());
    queue<char> q1;
    for (int i = 0; i < s.size(); i++) {
        q1.push(s[i]);
    }
    queue<char> q2;
    for (int i = 0; i < goal.size(); i++) {
        q2.push(goal[i]);
    }
    int k = goal.size();
    while (k--) {
        char ch = q2.front();
        q2.pop();
        q2.push(ch);
        if (q2 == q1)
            return true;
    }
    return false;
}

int main(){
    string s1 = "ABCD", s2="CDAB";
    
    if(check_rotation(s1, s2))
        cout<<"Yes"<<endl;
    else   
        cout<<"No"<<endl;
   /* if(isRotation(s1, s3))
        cout<<"Yes"<<endl;
    else   
        cout<<"No"<<endl;*/
    return 0;
}