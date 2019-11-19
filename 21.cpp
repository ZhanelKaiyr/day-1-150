#include <iostream>
#include <cmath>
using namespace std;

int main()
{ double a,b,c,S,P;
cin>>a>>b;
c=sqrt(a*a+b*b);
S=a*b/2;
P=a+b+c;
   cout<<S<<" "<<P<<" "<<c;

    return 0;
}