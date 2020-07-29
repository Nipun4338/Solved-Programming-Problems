#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,dp[2000][2000],cost[2000],weight[2000];

int func(int i,int w)
{
    if(i>b)
    {
        return 0;
    }
    int p=0,q=0;
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }
    if(w+weight[i]<=a)
    {
        p=cost[i]+func(i+1,w+weight[i]);
    }
    q=func(i+1,w);
    dp[i][w]=max(p,q);
    return dp[i][w];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int ans;
    cin>>a>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        weight[i]=c;
        cost[i]=d;
    }
    ans=func(0,0);
    cout<<ans<<endl;
    //cout<<nCr(a,b)<<endl;

}
