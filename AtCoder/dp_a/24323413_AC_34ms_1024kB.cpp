#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,dp[100000],cost[100000],weight[100];

void func(int a)
{
    dp[1]=0;
    dp[2]=abs(cost[1]-cost[2]);
    for(int i=3; i<=a; i++)
    {
        dp[i]=min(dp[i-1]+abs(cost[i]-cost[i-1]),dp[i-2]+abs(cost[i]-cost[i-2]));
    }
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        cin>>cost[i];
    }
    func(a);
    cout<<dp[a]<<endl;
    //cout<<nCr(a,b)<<endl;

}
