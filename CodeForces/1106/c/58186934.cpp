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
    ll a,b,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<a/2; i++)
    {
        sum=sum+((v[i]+v[a-i-1])*(v[i]+v[a-i-1]));
    }
    cout<<sum<<endl;
}
