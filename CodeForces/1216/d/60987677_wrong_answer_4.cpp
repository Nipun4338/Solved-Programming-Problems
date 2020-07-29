#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,sum=0;
    vector<ll>v,v1,v2;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    ll c=v[v.size()-1];
    for(int i=v.size()-1; i>=0; i--)
    {
        sum=sum+(c-v[i]);
        //cout<<c-v[i]<<endl;
    }
    //cout<<2<<endl;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!=0 && sum>=v[i] && sum%v[i]==0)
        {
            cout<<sum/v[i]<<" "<<v[i]<<endl;
            return 0;
        }
    }
    cout<<1<<" "<<sum<<endl;
}
