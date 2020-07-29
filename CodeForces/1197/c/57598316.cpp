/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;

int main()
{
    ll a,b,c,d=0,sum=0,e;
    cin>>a>>b>>c;
    //v.push_back(c);
    for(int i=1; i<a; i++)
    {
        cin>>d;
        e=d;
        d=d-c;
        v.push_back(d);
        c=e;
    }
    sort(v.begin(),v.end());
    /*for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }*/
    cout<<accumulate(v.begin(),v.end()-b+1,sum)<<endl;
}
