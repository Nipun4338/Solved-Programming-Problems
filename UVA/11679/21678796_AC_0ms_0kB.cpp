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
    /*ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/

    ll a,b,c,d,e;
    while(cin>>a>>b)
    {
        if(a+b==0)
        {
            break;
        }
        //vector<ll>v;
        ll v[a];
        memset(v,0,sizeof(v));
        for(int i=0; i<a; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<b; i++)
        {
            cin>>c>>d>>e;
            v[c-1]-=e;
            v[d-1]+=e;
        }
        sort(v,v+a);
        if(v[0]>=0)
        {
            cout<<"S"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
    return 0;
}