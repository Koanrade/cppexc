#include <bits/stdc++.h>
using namespace std;
int chartoint(char c){
	int d;
	if((int)c>64&&(int)c<91){
			d=(int)c-55;
		}
	else if((int)c>47&&(int)c<58){
			d=(int)c-48;
	}
		return d;
}
long long systodec(string liczba,int system){
	long long w=chartoint(liczba[0]);
	char c;
	int d;
	for(int i=1;i<liczba.size();i++)
    {
            d = chartoint(liczba[i]);
            w = w * system + d;
    }
	return w;
}
string dectosys(long long dec,int system2){
	string jakastam="";
	int res;
	char znak;
	int d;
while(dec>0)
{
  res = dec % system2;
  if (res > 9)
  {
    d=res+55;
    znak=(char)d;
  }
  else
  {
  	d=res+48;
    znak=(char)d;
  }
  dec = dec/system2;
  jakastam+=znak;
 }
return jakastam;
}
string ferocious(string s){
    stringstream cc;
    cc << s;
    string f(cc.str());
    string z(f.rbegin(), f.rend());
    return z;
}
int main() {
	string gramburger;
	cin>>gramburger;
	int system1,system2;
	cin>>system1>>system2;
		long long decimalnum=systodec(gramburger,system1);
		cout<<ferocious(dectosys(decimalnum,system2));
		
	return 0;
}
