/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,e;
    double d=0;
    cin>>a>>b>>c;
    d=(a/100.0)*c;
    e=d;
    if(d-(int)d>0.0)
    {
        e=ceil(d);
    }
    if(e<=b)
    {
        cout<<"0"<<endl;
        return 0;
    }
    cout<<e-b<<endl;
}

