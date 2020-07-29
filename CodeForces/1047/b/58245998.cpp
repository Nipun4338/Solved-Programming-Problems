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
    ll a,b,c;
    vector<ll>v;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        v.push_back(b+c);
    }
    sort(v.rbegin(),v.rend());
    cout<<v[0]<<endl;
}
