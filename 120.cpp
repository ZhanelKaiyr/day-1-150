#include <iostream>
using namespace std;

int main()
{
string  a;
cin>>a;
int m=a[0];
for(int i=0; i<a.length();i++){
        if(a[i]>m) m=a[i];
}
m=m-48;
cout<<m;
return 0;
}
