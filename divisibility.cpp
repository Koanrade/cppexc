#include <bits/stdc++.h>

using namespace std;
int main() {
	ios::sync_with_stdio(0);
    long long x,y;
	long long p3,p5,p15,p3l5;
	cin>>x;
	cin>>y;
	p3=(y/3)-((x-1)/3);
	p5=(y/5)-((x-1)/5);
	p15=(y/15)-((x-1)/15);
	p3l5=p3+p5-p15;
	cout<<p3l5;

}