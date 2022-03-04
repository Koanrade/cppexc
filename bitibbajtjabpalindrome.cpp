#include <stdio.h>
#include <algorithm>
int main() {
	int n,inpvalu,countl=1,np=0,j=0;
	scanf("%d",&n);
	int inpl[n];
		for(int i=0;i<n;i++){
			scanf("%d",&inpvalu);
			inpl[i]=inpvalu;}
	std::sort(inpl,inpl+n);
		for(int i=1;i<=n;i++){
			if(inpl[i]==inpl[i-1]) countl++;
			else{
				if(countl%2!=0) np++;
				countl=1;}}
	if(np>1) printf("NIE");	
	else printf("TAK");	
	return 0;}