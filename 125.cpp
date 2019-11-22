#include <iostream>
#include <cmath>
using namespace std;
int main()
{ double  a, b,h;
double double y;
cin>>a>>b>>h;
for( double  i=a;i<b;i=i+h){
    y=i*i-sin(i);
   cout<<"x="<<i<<"  "<<"y="<<y<<endl; 
}
return 0;
}
