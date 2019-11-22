#include <iostream>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(i%12==0){
            cout<<i<<" ";
        }
    }
}