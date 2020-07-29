/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,v[100001];

/*int bin_search(ll b1)
{
    ll low=0;
    ll high=a-1;
    ll res=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]==b)
        {
            low=mid+1;
            //high=mid-1;
            res=mid;
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
}*/

int main()
{
    //ofstream m;
    //m.open("ex.txt");
    ll a1,arr;
    cin>>a;
    memset(v,0,sizeof(v));
    //fill(v.begin(),v.end(),0);
    for(int i=0; i<a; i++)
    {
        cin>>v[i];
    }
    sort(v,v+a);
    //bin_search();
    //cout<<bin_search(b)<<endl;
    //cout<<"Case "<<j+1<<": "<<bin_search(1,10000001)<<endl;
    cin>>a1;
    for(int i=0; i<a1; i++)
    {
        cin>>b;
        //vector<ll>::iterator lower,upper;
        //lower=lower_bound(v.begin(),v.end(),b);
        //upper=upper_bound(v.begin(),v.end(),b);
        //cout<<bin_search(b)<<endl;
        ll lower,upper;
        lower=lower_bound(v,v+a,b)-v;
        upper=upper_bound(v,v+a,b)-v-1;
        lower--;
        upper++;
        //cout<<lower<<" "<<upper<<endl;
        if(lower==-1)
        {
            cout<<"X ";
        }
        else
        {
            cout<<v[lower]<<" ";
        }
        if(upper==a)
        {
            cout<<"X"<<endl;
        }
        else
        {
            cout<<v[upper]<<endl;
        }
        //cout<<(upper-v.begin())-1<<endl;
        //cout<<(lower-v.begin())<<endl;
    }
    //m.close();
    return 0;
}
