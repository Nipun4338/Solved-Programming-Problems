#include<bits/stdc++.h>
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);
#define eb              emplace_back
#define em              emplace
#define pb              push_back
#define Mp              make_pair
#define ff              first
#define ss              second
#define mod 1000000007
typedef long long ll;
using namespace std;

const int M = (int)(2e6 + 239);


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<ll>v;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        if(v[v.size()-1]>0)
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(1);
        }
        ll flag=0, sum=0, sum1=INT_MIN,sum2=0;
        if(v[0]>0)
        {
            for(int i=0; i<b+1; i++)
            {
                if(v[i]>0 && flag==0)
                {
                    sum=max(sum,v[i]);
                }
                else if(v[i]>0 && flag)
                {
                    flag=0;
                    sum=max(sum,v[i]);
                    sum2+=sum1;
                    sum1=INT_MIN;
                }
                else if(v[i]<0 && flag!=1)
                {
                    sum2+=sum;
                    sum=0;
                    sum1=max(v[i],sum1);
                    flag=1;
                }
                else if(v[i]<0)
                {
                    sum1=max(v[i], sum1);
                }
            }
        }
        else
        {
            for(int i=0; i<b+1; i++)
            {
                if(v[i]<0 && flag==0)
                {
                    sum1=max(v[i],sum1);
                }
                else if(v[i]<0 && flag)
                {
                    flag=0;
                    sum1=max(v[i],sum1);
                    sum2+=sum;
                    sum=0;
                }
                else if(v[i]>0 && flag!=1)
                {
                    sum2+=sum1;
                    sum1=INT_MIN;
                    sum=max(v[i],sum);
                    flag=1;
                }
                else if(v[i]>0)
                {
                    sum=max(v[i],sum);
                }
            }
        }
        cout<<sum2<<endl;
    }
}
