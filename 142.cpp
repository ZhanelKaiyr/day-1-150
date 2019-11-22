#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0, numb, g;
    numbr=rand()%100+1;
    while(counter<3)
    {
        cout<<"Find the guessed number: ";
        cin>>guess;
        if (g==numb)
        {
            cout<<"You won!"<<endl;
            break;
        }
        if(counter==2)
        {
            cout<<"You lost! The number is:"<<numb<<endl;
            break;
        }
        if(g<numb) cout<<"Enter a bigger number."<<endl;
        
        else if(g>numb) cout<<"Enter a smaller number."<<endl;
        
        counter++;
    }
}
