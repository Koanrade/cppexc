#include <bits/stdc++.h>
//97-122
int main() {
	std::string a;
	std::cin>>a;
	int buff=0,max;
	std::string wynik=" ";
	int tab[123]={0};
	int len=a.length();
	for(int i=0;i<len;i++){
		tab[a[i]]+=1;
	}
	for(int i=97;i<123;i++){
		if(tab[i]>buff){
			buff=tab[i];
			max=i;
		}
		else if(tab[i]==buff){
			if(i>max){
				max=i;
			}
		}
	}
	for(int i=97;i<123;i++){
		if(i!=max){
			for(int b=0;b<tab[i];b++){
			std::cout<<(char)i;
			}
		}
		
	}
	
	return 0;
}