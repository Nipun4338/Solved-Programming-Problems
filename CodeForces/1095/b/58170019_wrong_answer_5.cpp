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
        cout<<v[v.size()-2]-v[0]<<endl;
        return 0;
    }
    cout<<"0"<<endl;
}
