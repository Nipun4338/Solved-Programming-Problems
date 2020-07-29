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
        cin>>b>>c;
        vector<ll>v,v1;
        ll x=INT_MAX;
        for(int i=0; i<b; i++)
        {
            cin>>d;
            x=min(x,d);
            v.push_back(d);
        }
        ll flag=0;
        set<ll>s;
        for(int i=0; i<b/2; i++)
        {
            ll sum=v[i]+(v[v.size()-i-1]);
            s.insert(sum);
            v1.push_back(sum);
        }
        if(s.size()==1)
        {
            cout<<0<<endl;
        }
        else
        {
            ll sum1=0;
            for(int i=0; i<v1.size()-1; i++)
            {
                if(v1[i]*2<v1[i+1])
                {
                    sum1+=2;
                }
                else
                {
                    sum1++;
                }
            }
            cout<<sum1<<endl;
        }
    }
}
