#include <iostream>
using namespace std;

int main()
{
    int     a,b,c,count;
    cin >>a>>b>>c;
    if (a<5 )count++;
    if (b<5 )count++;
    if (c<5)count++;
    if (count >=2) cout<<"Yes";
    else cout << "No";
    return 0;
}