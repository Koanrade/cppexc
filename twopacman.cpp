#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long e=0,w=0;
	unsigned long long x;
	cin>>x;
	while(pow(2,e)<=x){
		w++;
		e++;
	}
	if (w==59) w=w-1;
	cout<<w;
	return 0;
}