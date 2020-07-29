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

    ll a,b;
    cin>>a;
    while(a--)
    {
        cin>>b;
        ll c=b/2;
        if(c%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ll x=2, sum=0, sum1=0;
            for(int i=0; i<b/2; i++)
            {
                cout<<x<<" ";
                sum+=x;
                x+=2;
            }
            ll y=1;
            for(int i=0; i<(b/2)-1; i++)
            {
                cout<<y<<" ";
                sum1+=y;
                y+=2;
            }
            cout<<sum-sum1<<endl;
        }
    }
}
