#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<3;i++){
		for(int j=0;j<n+2;j++){
			if(i==1){
				if(j==0||j==n+1){
				cout<<"#";	
				}
				else cout<<"@";
				
			}
			else{
				cout<<"#";
			}
		}
		cout<<endl;
	}
	return 0;
}