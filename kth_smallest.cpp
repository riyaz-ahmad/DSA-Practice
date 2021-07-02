#include <bits/stdc++.h>
using namespace std;


int main() {
    int a[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;
    sort(a, a+n);
    cout<<k<<" th smallest: "<<a[k-1];
	return 0;
}