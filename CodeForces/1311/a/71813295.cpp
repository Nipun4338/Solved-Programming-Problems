#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        if(b==c)
            cout<<0<<endl;
        else if(b%2==0 && c%2==0)
        {
            if(b<c)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else if(b%2==1 && c%2==1)
        {
            if(b>c)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else if(b<c)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}
