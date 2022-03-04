#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	unsigned int n;int x,a,b;
	cin>>n;
	int tab[n];
	for(int i=0;i<n;i++){
		cin>>x;	
		tab[i]=x;
	}
	a = *max_element(tab, tab+n);
    b = *min_element(tab, tab+n);

    if(b<0)
    {
        fabs(b);
        cout << a-b;
    }
    else
    {
        cout << a-b;
    }

	return 0;
}