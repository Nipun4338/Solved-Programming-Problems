#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,dp[100][100],cost[500],weight[500];

int func(int i,int w)
{
    if(i==a)
    {
        return 0;
    }
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }
    int p=0,q=0;
    if(w+weight[i]<=c)
    {
        p=cost[i]+func(i+1,w+weight[i]);
    }
    q=func(i+1,w);
    //r=max(cost[i],r);
    dp[i][w]=max(p,q);
    return dp[i][w];
}

int main()
{
    int a1,ans;
    cin>>a1;
    for(int j=0; j<a1; j++)
    {
        cin>>a>>b>>c;
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<500; i++)
        {
            cost[i]=1;
        }
        for(int i=0; i<a; i++)
        {
            cin>>d;
            weight[i]=d;
            //cost[i]=c;
        }
        ans=func(0,0);
        cout<<"Case "<<j+1<<": "<<min(ans,b)<<endl;
        //cout<<nCr(a,b)<<endl;
    }

}
