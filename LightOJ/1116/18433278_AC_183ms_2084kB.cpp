#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,i,j;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>b;
        if(b%2==1)
        {
            cout<<"Case "<<i+1<<": Impossible"<<endl;
        }
        else
        {
            for(j=2; j<=b; j+=2)
            {
                if(b%j==0 && (b/j)%2==1)
                {
                    cout<<"Case "<<i+1<<": "<<b/j<<" "<<j<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

