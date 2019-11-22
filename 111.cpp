#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    m=2*n;
    for(int i=0; i<n; i++){
        cout<<"A";
        if(i==0 || i==n-1){
            for(int i=1; i<2*n; i++){
                cout<<"A";
            }
            cout<<endl;
        }
        else{
            for(int j=1;j<m;j++){
                if(j==m-1)
                cout<<"A";
                else cout<<"B";
            }
            cout<<endl;
        }
    }
}