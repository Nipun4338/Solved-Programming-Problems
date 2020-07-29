#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,cost[1000000],weight[100],INF=1e9;
vector<int>dp(1000000,1e9);

void func(int a,int k)
{
    dp[1]=0;
    for(int i=1; i<=a; i++)
    {
        for(int j=i+1; j<=i+k; j++)
        {
            if(j<=a)
            {
                dp[j]=min(dp[j],dp[i]+abs(cost[i]-cost[j]));
                //cout<<dp[j]<<endl;
            }
            //dp[j]=min(dp[j],dp[i]+abs(cost[i]-cost[j]));
        }
    }
}

int main()
{
    int k;
    cin>>a>>k;
    for(int i=1; i<=a; i++)
    {
        cin>>cost[i];
    }
    func(a,k);
    cout<<dp[a]<<endl;
    //cout<<nCr(a,b)<<endl;

}
