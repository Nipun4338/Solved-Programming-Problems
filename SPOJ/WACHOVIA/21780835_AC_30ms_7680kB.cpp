#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,dp[1000][1000],cost[1000],weight[1000];

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
    //cout<<dp[i][w]<<endl;
    return dp[i][w];
}

int main()
{
    int ans,a1;
    cin>>a1;
    for(int j=0; j<a1; j++)
    {
        memset(dp,-1,sizeof(dp));
        memset(cost,0,sizeof(cost));
        memset(weight,0,sizeof(weight));
        cin>>a>>b;
        for(int i=0; i<b; i++)
        {
            cin>>c>>d;
            weight[i]=c;
            cost[i]=d;
        }
        ans=func(0,0);
        cout<<"Hey stupid robber, you can get "<<ans<<"."<<endl;
        ans=0;
    }
    //cout<<nCr(a,b)<<endl;

}
