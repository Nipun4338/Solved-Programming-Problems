#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll a,b,c;
    cin>>a;
    map<ll,ll>deg;
    vector< pair<ll,ll>>v;
    vector<ll>v1(a+1,-1);
    for(int i=0; i<a-1; i++)
    {
        cin>>b>>c;
        deg[b]++;
        deg[c]++;
        v.push_back(make_pair(b,c));
    }
    //memset(v1,-1,sizeof(v1));
    int l=0;
    for(int i=0; i<a-1; i++)
    {
        //cout<<v[i].size()<<endl;
        if(deg[v[i].first]==1 || deg[v[i].second]==1)
        {
            v1[i]=l;
            l=l+1;
            //cout<<l<<endl;
        }
    }
    for(int i=0; i<a-1; i++)
    {
        if(v1[i]==-1)
        {
            v1[i]=l;
            l=l+1;
        }
    }
    //cout<<l<<endl;
    for(int i=0; i<a-1; i++)
    {
        cout<<v1[i]<<endl;
    }
}
