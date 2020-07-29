#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,d1,sum=0;
    cin>>a>>b>>c>>d;
    vector<ll>v1,v2;
    for(int i=0; i<a; i++)
    {
        cin>>d1;
        v1.push_back(d1);
    }
    for(int i=0; i<b; i++)
    {
        cin>>d1;
        v2.push_back(d1);
    }
    if(v1[c-1]<v2[v2.size()-d])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
