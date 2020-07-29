/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
set<ll>s;

int main()
{
    ll a,b,c,d,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    sum=0;
    sum=accumulate(v.begin(),v.end(),sum);
    if(sum%2==0 && sum>=v[a-1])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
