/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
ll a,b,e,v1[900000];

bool check(ll mid)
{
    ll temp=b-1;
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]<=temp)
        {
            if(v[i]+mid<temp)
            {
                v1[i]=v[i]+mid;
                temp=v1[i];
            }
            else
            {
                v1[i]=temp;
            }
        }
        else
        {
            if(v[i]+mid>=temp+b)
            {
                v1[i]=temp;
            }
            else
            {
                e=v[i]+mid;
                e=e%b;
                v1[i]=e;
                temp=v1[i];
            }
        }
        temp=v1[i];
    }
    /*for(int i=0; i<a; i++)
    {
        cout<<v1[i]<" ";
    }
    cout<<endl;*/
    for(int i=a-2; i>=0; i--)
    {
        if(v1[i]>v1[i+1])
        {
            return false;
        }
    }
    return true;
}

ll bin_search(ll b)
{
    ll low=0;
    ll high=b;
    ll res=-1;

    while(low<=high)
    {
        ll mid=(low+high)>>1;
        if(mid!=0 && check(mid))
        {
            high=mid-1;
            res=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    return res;
}

int main()
{
    ll c,d=0,flag;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        v.push_back(c);
    }
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i]<=v[i+1])
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        d=bin_search(b);
        cout<<d<<endl;
    }
    return 0;
}