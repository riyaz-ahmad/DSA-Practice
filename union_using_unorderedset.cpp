#include<bits/stdc++.h>
using namespace std;

int main() {
	int n , m;
	int a[] = {1, 2, 3, 4, 5};
	int b[] = {1, 2, 3};
	n = sizeof(a)/sizeof(a[0]);
	m = sizeof(b)/sizeof(b[0]);
	unordered_set<int> s;
   	s.insert(a, a+n);
   	s.insert(b, b+n);
    
    	for(auto v: s)
    	    cout<<v<<" ";
   	 cout<<endl;
    	cout<<s.size();
    	return 0;
}