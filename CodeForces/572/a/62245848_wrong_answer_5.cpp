#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d,d1;
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
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1[c-1]<v2[0])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
