/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
ll a,d;

int main()
{
    ll a,b,c=1,e;
    cin>>a;
    v.push_back(1);
    for(int i=1; i<=a; i++)
    {
        cin>>b;
        c=c+b;
        v.push_back(c);
    }
    cin>>e;
    for(int i=0; i<e; i++)
    {
        cin>>d;
        cout<<upper_bound(v.begin(),v.end(),d)-v.begin()<<endl;
    }
    return 0;
}
