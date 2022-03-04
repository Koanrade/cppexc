#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
long long r,y=0;
int main()
{
    cin>>n;

    while(n!=0)
    {
        r=n%16;
        n/=16;
        if(r>9)
        {
            y=1;
        }
		if(y==1)
    {
        cout<<"TAK";
        break;
    }
    }
    if(y==0)
    {
        cout<<"NIE";
    }
    
}