#include <iostream>

using namespace std;
int palin(int a){
	int b=0;
	for(;a>0;){
	b=b*10+a%10;
	a=a/10;
}
return b;
}
int main()
{
	int liczba,x=0,a=0;
	cin>>liczba;
	while(x==0){
		if(palin(liczba)==liczba){
			x=1;
			cout<<a;
		}
		else{
			liczba++;
			a++;
		}
	}
}