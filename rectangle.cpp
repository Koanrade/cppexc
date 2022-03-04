#include <bits/stdc++.h>

using namespace std;
int main() {
	int n;
	cin>>n;
	int x,y,a,b,a1,a2,b1,b2;
	int tabx[n];
	int taby[n];
	for(int i=0;i<n;i++){
		cin>>x;
		cin>>y;
		tabx[i]=x;
		taby[i]=y;
	}
	a1=*max_element(tabx, tabx+n);
	b1=*max_element(taby, taby+n);
	a2=*min_element(tabx, tabx+n);
    b2=*min_element(taby, taby+n);
    a=abs(a1-a2);
    b=abs(b1-b2);
    cout<<2*a+2*b;
	return 0;
}