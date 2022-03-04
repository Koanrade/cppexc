#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	int n,m,k;
	cin>>n>>m>>k;
	if(k%n!=0&&k%m!=0){
		cout<<"NIE";
	}
	else{
		if(k%n==0&&k/n<=m){
		cout<<"TAK";
		return 0;
		}
		else if(k%n==0&&k/n>=m)
		{
			cout<<"NIE";
			return 0;
		}
		else if(k%m==0&&k/m<=n){
		cout<<"TAK";
		return 0;
		}
		else if(k%m==0&&k/m>=n)
		{
			cout<<"NIE";
			return 0;
		}
		
	}
	return 0;
}