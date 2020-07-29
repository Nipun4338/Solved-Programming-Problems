#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll a,b,c,d,dp[105][100005],cost[100005],weight[100005];

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
    ll ans;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c>>d;
        weight[i]=c;
        cost[i]=d;
    }
    ans=func(0,0);
    cout<<ans<<endl;
    //cout<<nCr(a,b)<<endl;

}
