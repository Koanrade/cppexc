#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(x==0){
				cout<<x;
				x=1;
			}
			else if(x==1){
				cout<<x;
				x=0;	
			}	
		}
		if(n%2==0&&x==1)x=0;
		else if(n%2==0&&x==0)x=1;
		cout<<endl;
	}
	return 0;
}