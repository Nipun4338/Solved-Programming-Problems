/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v1,v2,v3;

ll bin_search(ll n)
{
    ll low=0;
    ll high=1e10;
    ll res=-1;

    while(low<=high)
    {
        ll mid=(low+high)>>1;
        ll temp=(mid*(mid+1))>>1;
        //cout<<mid<<endl;
        if(temp==n)
        {
            low=mid+1;
            res=mid;
            //break;
        }
        if(temp<n)
        {
            low=mid+1;
        }
        if(temp>n)
        {
            high=mid-1;
        }
        else
        {
            res=mid;
        }
    }
    return res;
}

int main()
{
    ll a,b,c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        if(b==c)
        {
            c=-1;
        }
        v1.push_back(b);
        v2.push_back(b);
        v2.push_back(c);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    ll d=0,e=0;
    for(ll i=0; i<a; i++)
    {
        e=upper_bound(v1.begin(),v1.end(),v1[i])-v1.begin()-(lower_bound(v1.begin(),v1.end(),v1[i])-v1.begin());
        d=max(d,e);
    }
    if(d>=(a+1)/2)
    {
        cout<<"0"<<endl;
        return 0;
    }
    d=0,e=0;
    ll f=0,g=0,flag=0;
    for(ll i=0; i<v2.size(); i++)
    {
        if(v2[i]!=-1)
        {
            d=upper_bound(v2.begin(),v2.end(),v2[i])-v2.begin()-(lower_bound(v2.begin(),v2.end(),v2[i])-v2.begin());
            e=upper_bound(v1.begin(),v1.end(),v2[i])-v1.begin()-(lower_bound(v1.begin(),v1.end(),v2[i])-v1.begin());
            //cout<<d<<" "<<e<<" "<<f<<endl;
            if(d>=(a+1)/2)
            {
                v3.push_back(abs(((a+1)/2)-e));
                flag=1;
            }
            //g=min(abs(d-e),g);
        }
    }
    sort(v3.begin(),v3.end());
    if(flag==1)
    {
        cout<<v3[0]<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
