/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;

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
        cin>>b;
        c=bin_search(b);
        cout<<c<<endl;
    }
    return 0;
}