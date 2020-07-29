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

void decitobinbitodeci()
{
    string binary = bitset<8>(128).to_string(); //to binary
    cout<<binary<<"\n";

    unsigned long decimal = bitset<8>(binary).to_ulong();
    cout<<decimal<<"\n";
}

int getnum(string a)
{
    int i,p=0;
    rep0(i,a.size())
    {
        p*=10;
        p+=a[i]-'0';
    }
    return p;
}

# define M_PI           3.14159265358979323846
static double d2r(double d)
{
    return (d / 180.0) * ((double) M_PI);
}

/*
1.always remember for ncr(n,2), you can calculate by->
n*(n-1)/2
2.Power of 2 ->  (1ll<<i)
*/

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d,e;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<ll>v;
        v.push_back(0);
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        vector<ll>dp(b+1,1);
        ll ans=0;
        for(int i=1; i<v.size(); i++)
        {
            for(int j=i*2; j<v.size(); j+=i)
            {
                if(v[i]<v[j])
                {
                    dp[j]=max(dp[i]+1,dp[j]);
                }
            }
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
}

    /*Remember Remember, if you are so much excited that
    your mind is shaking,
    this is not the last contest that you are proceeding now,
    if Almighty wants,
    time will come.*/
