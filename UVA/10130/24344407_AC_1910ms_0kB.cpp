#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll a,b,c,d,cost[1005],weight[1005],dp[1005][1005];

ll func(ll i,ll w)
{
    if(i>a)
    {
        return 0;
    }
    ll p=0,q=0;
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }
    if(w+weight[i]<=b)
    {
        p=cost[i]+func(i+1,w+weight[i]);
    }
    q=func(i+1,w);
    dp[i][w]=max(p,q);
    //cout<<dp[i][w]<<endl;
    return dp[i][w];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    ll ans,e,sum=0,a1;
    cin>>a1;
    while(a1--)
    {
        cin>>a;
        for(int i=0; i<a; i++)
        {
            cin>>c>>d;
            weight[i]=d;
            cost[i]=c;
        }
        cin>>e;
        for(int i=0; i<e; i++)
        {
            cin>>b;
            ans=func(0,0);
            sum=sum+ans;
            memset(dp,-1,sizeof(dp));
        }
        cout<<sum<<endl;
        sum=0;
        memset(cost,0,sizeof(cost));
        memset(weight,0,sizeof(weight));
    }
    //cout<<nCr(a,b)<<endl;

}
