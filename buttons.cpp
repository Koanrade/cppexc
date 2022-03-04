#include <bits/stdc++.h>
int liczprzy[1000007];
int main() {
	int n,m,x,buff=0,k=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&x);
		if(x==n+1) k=buff;
		else{
		liczprzy[x]=std::max(k,liczprzy[x])+1;
		buff = std::max(buff,liczprzy[x]);
		}
	}
	for(int i=1;i<=n;i++) printf("%d ",std::max(k,liczprzy[i]));
	return 0;
}