#include <bits/stdc++.h>

using namespace std;

int main() {
	double long lx=0,ly=1,px=1,py=0,sx,sy,x,y,S;
	cin>>x>>y;
	S=(lx+px)/(ly+py);
	while(S!=x/y){
	sx=lx+px;
	sy=ly+py;
	
		if(x/y>S){
			cout<<'P';
			lx=sx;
			ly=sy;
		}
		else if(x/y<S){
			cout<<'L';
			px=sx;
			py=sy;
		}
		S=(lx+px)/(ly+py);
	}
	return 0;
}