#include<bits/stdc++.h>
using namespace std;
//int a,b,c,d,dp[100][100],cost[100],weight[100];
int a1,a,b,c,d,e,f,g,dp[1000000];

long long int func(long long int n)
{
    /*if(i>a)
    {
        return 0;
    }
    int p=0,q=0;
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
    return dp[i][w];*/
    if(n==0)
        return a;
    if(n==1)
        return b;
    if(n==2)
        return c;
    if(n==3)
        return d;
    if(n==4)
        return e;
    if(n==5)
        return f;
    if(dp[n]!=-1)
    {
        return dp[n]%10000007;
    }
    dp[n]=( func(n-1) + func(n-2) + func(n-3) + func(n-4) + func(n-5) + func(n-6) )%10000007;
    return dp[n];
}

int main()
{
    //int ans;
    int b1=0;
    cin>>a1;
    while(a1--)
    {
        b1++;
        cin>>a>>b>>c>>d>>e>>f>>g;
        memset(dp,-1,sizeof(dp));
        /*for(int i=0; i<a; i++)
        {
            cin>>c>>d;
            weight[i]=c;
            cost[i]=d;
        }*/
        int ans=func(g)%10000007;
        cout<<"Case "<<b1<<": "<<ans<<endl;
    }
    //ans=func(0,0);
    //cout<<ans<<endl;
    //cout<<nCr(a,b)<<endl;

}
