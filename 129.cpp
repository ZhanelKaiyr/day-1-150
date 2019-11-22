#include <iostream>
using namespace std;
int main ()
{int sum=0;
 int n;
 cin>>n;
 for (int i=1; i<=n; i++){
     for(int j=1; j<i;j++){
     if (i%j==0){
         sum=sum+j;
    }
    }if(sum==i)cout<<i<<" ";
    sum=0;
 }
 return 0;
}

