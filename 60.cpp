#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a;
     c=a/100;
    b=(a-c*100)/10;
    d=(a-c*100-b*10);
    cout<<d<<b<<c;
    
}