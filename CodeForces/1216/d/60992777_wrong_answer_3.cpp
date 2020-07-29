#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return Gcd(b,a%b);
}

ll Lcm(ll a, ll b)
{
    return ((a/Gcd(a,b))*b);
}


int main()
{
    ll a,b,sum=0;
    vector<ll>v,v1,v2,v3;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    ll c=v[v.size()-1];
    for(int i=0; i<v.size(); i++)
    {
        sum=sum+(c-v[i]);
        //cout<<c-v[i]<<endl;
    }
    //cout<<2<<endl;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!=0)
        {
            v3.push_back(v[i]);
        }
    }
    ll g=v[v.size()-2];
    /*for(int i=1; i<v3.size(); i++)
    {
        g=Gcd(g,v3[i]);
        //cout<<g<<endl;
    }*/
    //cout<<g<<endl;
    for(int i=v.size()-2; i>=0; i--)
    {
        if(v[i]!=0 && sum>=v[i] && sum%v[i]==0)
        {
            cout<<sum/v[i]<<" "<<v[i]<<endl;
            return 0;
        }
    }
    //for(int i=)
    cout<<1<<" "<<sum<<endl;
}
