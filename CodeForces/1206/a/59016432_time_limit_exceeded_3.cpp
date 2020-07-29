/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int bin_search(ll key,ll arr[],ll a)
{
    ll low=0;
    ll high=a-1;
    int res=-1;

    while(low<=high)
    {
        int mid=(low+high)>>1;
        if(arr[mid]==key)
        {
            res=mid;
            //high=mid-1;
            //low=mid+1;
            //return mid;
        }
        if(key>arr[mid])
        {
            low=mid+1;
        }
        if(key<arr[mid])
        {
            high=mid-1;
        }
    }
    if(low>high)
    {
        return res;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d,e1,e2,f1,f2,flag;
    ll c1[300],c2[300];
    //vector<ll>v1,v2;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>c1[i];
        //v1.push_back(c);
    }
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c2[i];
        //v2.push_back(c);
    }
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            d=c1[i]+c2[j];
            e1=bin_search(d,c1,a);
            f1=bin_search(d,c2,b);
            //cout<<e1<<" "<<f1<<endl;
            if(e1==-1 && f1==-1)
            {
                e1=c1[i];
                f1=c2[j];
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    cout<<e1<<" "<<f1<<endl;
}
