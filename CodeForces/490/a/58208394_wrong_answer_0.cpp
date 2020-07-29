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
    ll a,b,c,d,e;
    vector<ll>v,v1;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v1.push_back(b);
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    c=(upper_bound(v.begin(),v.end(),1)-v.begin())-(lower_bound(v.begin(),v.end(),1)-v.begin());
    d=(upper_bound(v.begin(),v.end(),2)-v.begin())-(lower_bound(v.begin(),v.end(),2)-v.begin());
    e=(upper_bound(v.begin(),v.end(),3)-v.begin())-(lower_bound(v.begin(),v.end(),3)-v.begin());
    ll f=min(c,min(d,e));
    cout<<f<<endl;
    ll g=-1,h=0,h1=1;
    for(int i=0; i<f; i++)
    {
        g+=3;
        h+=3;
        h1+=3;
        cout<<g<<" "<<h<<" "<<h1<<endl;
    }
}

