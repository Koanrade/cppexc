#include <bits/stdc++.h>

int main() {
	
	int n,a,pg,pj,f=0,g=0,og,oj,r1,r2;
	scanf("%d",&n);
	int tab[n+1];
	for(int i=0;i<n;i++){
		tab[i]=scanf("%d",&a);
		if(a==0&&f!=1){
			pg=i;
			f=1;
		}
		else if(a==1&&g!=1){
			pj=i;
			g=1;
		}
		if(a==0&&f==1){
			og=i;
		}
		if(a==1&&g==1){
			oj=i;
		}
	}
	r1=oj-pg;
	r2=og-pj;
	if(r1>r2){
		printf("%d",r1);
	}
	else if(r1<r2){
		printf("%d",r2);
	}
	else{
		printf("%d",r1);
	}
	return 0;
}