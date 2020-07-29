/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll> > v(100005);
ll a,b,c,d,e,f,a1=0,b1=0,a2=0,b2=0;

int main()
{
    cin>>a>>b>>c>>d;
    e=min(min(a,c),d);
    f=256*e;
    if(a>e)
    {
        a=a-e;
    }
    else
    {
        a=0;
    }
    e=min(a,b);
    cout<<f+(e*32)<<endl;
}
