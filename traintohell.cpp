#include <stdio.h>
#include <iostream>
	int pocwag[1000003];
	long long wagasum[1000003];
int main() {
	std::ios::sync_with_stdio(false);
	long long waga;
	int n,x,y,przedzialy,wagi;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
			scanf("%d",&wagi);
			pocwag[i]=wagi;
			if(i==0) wagasum[i]=wagi;
			else wagasum[i]=wagasum[i-1]+pocwag[i];}
	scanf("%d",&przedzialy);
	for(int i=0;i<przedzialy;i++){
			scanf("%d",&x);
			scanf("%d",&y);
			waga=wagasum[y-1]-wagasum[x-2];
			printf("%lld\n",waga);}
	return 0;}