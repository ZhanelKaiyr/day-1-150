#include <iostream>
#include <cmath>
using namespace std;

int main()
{ int a;
cin>>a;
if (a<0)cout<<(a*(-1))+pow(a,5);
else cout<<a+pow(a,5); 
    return 0;
}