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
    ll a,b,c,d;
    cin>>a>>d;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    b=a/2;
    c=0;
    c=accumulate(v.begin()+b,v.end(),c);
    //cout<<c<<endl;
    c=(c+d)/(a-b);
    cout<<c<<endl;
}
