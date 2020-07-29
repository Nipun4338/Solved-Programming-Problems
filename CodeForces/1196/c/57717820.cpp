/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v,v1;

int main()
{
    ll a,b,x,y,x1,x2,y2,y1;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        ll minx=-100000;
        ll miny=-100000;
        ll maxx=100000;
        ll maxy=100000;
        for(int j=0; j<b; j++)
        {
            cin>>x>>y>>x1>>y1>>x2>>y2;
            if(x1==0)
            {
                minx=max(minx,x);
            }
            if(x2==0)
            {
                maxx=min(maxx,x);
            }
            if(y1==0)
            {
                maxy=min(maxy,y);
            }
            if(y2==0)
            {
                miny=max(miny,y);
            }
        }
        if(maxx<minx || maxy<miny)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"1"<<" "<<minx<<" "<<miny<<endl;
        }
    }
    return 0;
}
