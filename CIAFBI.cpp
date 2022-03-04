#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    int n,a,suma=0;
    cin>>n;
    int tab[n];
    for(int i=0;i<n;i++){
        cin>>a;
        tab[i]=a;
    }
    for(int j=0;j<n;j++)
    {
    suma+=tab[j]; 
	cout<<suma<<" ";
    }
    
    return 0;
}