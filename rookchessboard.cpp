#include <iostream>
using namespace std;

int x,y,x2,y2;
int main() {
	cin >>x>>y>>x2>>y2;
	if(x==x2&&y==y2){
		cout << "NIE";	
	}
	else{
		if(x==x2||y==y2) cout<<"TAK";
	else cout << "NIE";	
	}

	return 0;
}