#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	int n,t,szuk,wys=0,j=0;
	cin>>n;
	int tmp[n];
	int dni[n];
	for(int i=0;i<n;i++){
		cin>>t;
		tmp[i]=t;
	}
	cin>>szuk;
	for(int i=0;i<n;i++){
		if(tmp[i]==szuk){
			wys++;
			dni[j]=i+1;
			j++;
		}
	}
	if(wys!=0){
		cout<<wys<<" ";
		for(int i=0;i<j;i++){
			cout<<dni[i]<<" ";
		}
	}
	else{
		cout<<0;
	}
	return 0;
}