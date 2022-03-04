#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int toint(char a){
	char b;int x=0;
	stringstream cb;
	cb<<a;
	cb>>b;
	stringstream ab;
	ab<<b;
	ab>>x;
	return x;
}
int main() {
	string calosc,l1="",l2="";
	cin>>calosc;
	long long d1=0,d2=0,sumacal=0,dr;
	int i=0;
	while(calosc[i]){
		if((int)calosc[i]!=88){
			sumacal+=toint(calosc[i]);
		}
		i++;
	}
	if(sumacal%9==0)
        cout<<9;
    else
        cout<<9-sumacal%9;
	
	
	return 0;
}