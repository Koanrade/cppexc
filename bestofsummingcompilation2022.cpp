#include <bits/stdc++.h>
int tab[500003];
using namespace std;
int main(){
	int x=1,j=0,i=0;
	long long nsuma=0,buff=-1001;
	while(x!=0){
   	scanf("%d",&x);
    	tab[i]=x;
    	i++;
		nsuma+=tab[j];
		if(nsuma>buff) buff=nsuma;
    	if(nsuma<0) nsuma=0;
		j++;} 
    printf("%lld",buff);
    return 0;
}