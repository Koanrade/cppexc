#include <stdio.h>

int main() {
	int n,a;
	int k,suma=0;
	scanf("%d",&n);
	int stan[n-1]={0};
	int buff=n;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&a);
		stan[a-1]++;
	}
	for(int j=0;j<buff;j++){
		if(stan[j]%2!=0){
			suma++;
		}
		
	}
	printf("%d",suma);
	return 0;
}