/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v1,v2;
ll a;

int bin_search(ll b1)
{
    ll low=0;
    ll high=a-1;
    ll res=-1;

    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(v2[mid]==b1)
        {
            low=mid+1;
            //high=mid-1;
            res=mid;
            //return mid;
        }
        if(b1>v2[mid])
        {
            low=mid+1;
        }
        if(b1<v2[mid])
        {
            high=mid-1;
            //res=mid;
        }
    }
    return res;
}

int main()
{
    //ofstream m;
    //m.open("ex.txt");
    ll c=0,c1=0,b,d=0,flag,flag1;
    cin>>a;
    //memset(v,0,sizeof(v));
    //fill(v.begin(),v.end(),0);
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v1.push_back(b);
        v2.push_back(b);
    }
    sort(v1.begin(),v1.end());
    c=v1[v1.size()-1];
    for(int i=0; i<v2.size(); i++)
    {
        if(v2[i]==c)
        {
            d=i;
            break;
        }
    }
    for(int i=0; i<d; i++)
    {
        if(v2[i]<v2[i+1])
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    for(int i=d; i<v2.size()-1; i++)
    {
        //cout<<v2[i]<<endl;
        if(v2[i]>v2[i+1])
        {
            flag1=0;
        }
        else
        {
            flag1=1;
            break;
        }
    }
    if(flag==0 && flag1==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    //cout<<d<<endl;
    //m.close();
    return 0;
}
