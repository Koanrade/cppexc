#include <iostream>

using namespace std;

int main()
{
    unsigned int a,b,c;
    cin >>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a){
    cout <<"TAK";
    }
    else cout<< "NIE";
    return 0;
}