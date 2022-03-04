#include <stdio.h>
int main()
{
    long long n,k,x,y;
    int i=0;
    scanf("%lld",&n);
    k=n;
    int dump[n];
	while(n--){
    	scanf("%lld",&x);
    	scanf("%lld",&y);
    	int sum=0,prze=0;
    	while(x!=0||y!=0){
    		sum = (x%10+y%10+sum)/10;
        	x/=10;
        	y/=10;
        	if (sum>0) prze++;}
    	dump[i]=prze;i++;}
    i=0;
    while(k--){
    	printf("%d\n",dump[i]);
    	i++;
	}
    return 0;
}