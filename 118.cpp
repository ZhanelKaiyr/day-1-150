#include <iostream>
using namespace std;
int main(){
    int a[10000];
    int c=0;
    for (int i =0; i<10000; i++) {
        cin>>a[i];
        if (a[i]==0) break ;
        else if (a[i]%2==0)c++;
       }
    cout<<c;
return 0 ;
}
