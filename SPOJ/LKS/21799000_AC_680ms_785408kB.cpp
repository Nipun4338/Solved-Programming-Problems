#include<bits/stdc++.h>
using namespace std;
long long int a,b,c,d,dp[10000][10000],cost[500],weight[500];

long long int func(long long int i,long long int w)
{
    if(i>b)
    {
        return 0;
    }
    long long int p=0,q=0;
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
    //cout<<w<<endl;
    return dp[i][w];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    long long int ans;
    cin>>a>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        weight[i]=d;
        cost[i]=c;
    }
    ans=func(0,0);
    cout<<ans<<endl;
    //cout<<nCr(a,b)<<endl;

}
