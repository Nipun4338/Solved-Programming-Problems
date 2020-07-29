/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
ll c1=0,c2=0;

/*bool solve(ll k)
{
    for(int i=1; i<=c/2; i++)
    {
        for(int j=c; j>=1; j--)
        {
            ll x=v[i]+v[j];
            //cout<<v[i]<<"  "<<v[j]<<endl;
            //cout<<x<<endl;
            if(x==k && i!=j)
            {
                //cout<<x<<endl;
                return true;
            }
            else if(x<k)
            {
                break;
            }
        }
    }
    return false;
}*/

ll bin_search(ll b1)
{
    ll low=0;
    ll high=v.size()-1;
    ll res=-1;

    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(v[mid]==b1)
        {
            low=mid+1;
            //high=mid-1;
            res=mid;
            break;
            //return mid;
        }
        if(b1>v[mid])
        {
            low=mid+1;
        }
        if(b1<v[mid])
        {
            high=mid-1;
            //res=mid;
        }
    }
    return res;
}

int main()
{
    ll a,b;
    v.push_back(0);
    for(ll i=1; i<=100000; i++)
    {
        v.push_back(v[i-1]+i);
        //cout<<v[i]<<endl;
    }
    cin>>b;
    for(ll i=1; i<=100000; i++)
    {
        if(bin_search(b-v[i])!=-1 && v[i]!=b)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}