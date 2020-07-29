#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,flag;
    cin>>a;
    pair<ll,ll>p[a];
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        p[i].first=b;
        p[i].second=c;
    }
    for(int i=0; i<a; i++)
    {
        if(p[i].first!=p[i].second)
        {
            cout<<"rated"<<endl;
            return 0;
        }
    }
    for(int i=0; i<a-1; i++)
    {
        if(p[i].first>=p[i+1].first)
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"unrated"<<endl;
    }
    else
    {
        cout<<"maybe"<<endl;
    }
}
