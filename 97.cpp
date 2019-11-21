#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0,i=1,n;
    cin>>n;
    while (i<2*n)
    {
        sum = sum+n*(n+1);
        i++;
    }
    cout<<sum;
}
