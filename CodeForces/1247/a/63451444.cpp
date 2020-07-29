#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c;
    cin>>a>>b;
    if(abs(a-b)>1 && (a!=9 && b!=1) && (a!=1 && b!=9))
    {
        cout<<"-1"<<endl;
    }
    else if(a!=b)
    {
        if(a<b && abs(a-b)<=1)
        {
            cout<<a<<"99"<<" "<<b<<"00"<<endl;
        }
        else if(a==9 && b==1)
        {
            cout<<a<<"9"<<" "<<b<<"00"<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else if(a==b)
    {
        cout<<a<<"12"<<" "<<b<<"13"<<endl;
    }
}
