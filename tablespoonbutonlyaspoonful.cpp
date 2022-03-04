#include <iostream>
using namespace std;
int main()
{
unsigned long long A,B,K,lk,podA,podB;
cin >>A>>B>>K;
if(A==0||B==0||K==0){
    lk=0;
    cout<<lk;}
else{
podA=A/K;
podB=B/K;
if(podA==0||podB==0){
    lk=0;
    cout<<lk;}
else{
    if(podA==2||podB==2){
        lk=podA*podB;
        cout <<lk;    }
    else if(podA==1||podB==1){
        lk=podA*podB;
        cout <<lk;    }
    else if(A%K==0&&B%K==0){
        lk=2*podA+2*podB-4;
        cout <<lk;    }
    else if(A%K!=0&&B%K!=0){
        lk=2*podA+2*podB-4;
        cout <<lk;    }
    else if(A%K==0&&B%K!=0){
        lk=2*podA+2*podB-4;
        cout <<lk;    }
    else if(A%K!=0&&B%K==0){
        lk=2*podA+2*podB-4;
        cout <<lk;    }
    else{
        lk=2*podA+2*podB-2;
        cout <<lk;    }
}
}
    return 0;
}