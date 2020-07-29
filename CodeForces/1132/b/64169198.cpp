#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,e,sum=0;
    cin>>a;
    vector<ll>v,v1,v2;
    while(a--)
    {
        cin>>b;
        sum=sum+b;
        v.push_back(sum);
        v2.push_back(b);
    }
    sort(v2.begin(),v2.end());
    cin>>b;
    while(b--)
    {
        cin>>c;
        v1.push_back(c);
    }
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v[v.size()-1]-v2[v2.size()-v1[i]]<<endl;
    }
}
