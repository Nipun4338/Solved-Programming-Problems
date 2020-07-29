/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v,v1,v2;

int main()
{
    ll a,b;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    if(a>2)
    {
        ll c=v[v.size()-2]-v[0];
        ll d=v[v.size()-1]-v[1];
        cout<<min(c,d)<<endl;
        return 0;
    }
    cout<<"0"<<endl;
}
