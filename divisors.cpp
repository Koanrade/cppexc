#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	unsigned int x;int i=1;
	cin >>x;
	for(;i*i<x;i++) if(x%i==0) cout<<i<<endl;
	if (i-(x/i)==1) i--;
	for(;i>=1;i--) if(x%i==0) cout<<x/i<<endl;
	return 0;
}