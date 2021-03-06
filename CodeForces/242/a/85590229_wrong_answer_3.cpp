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


/*
1.always remember for ncr(n,2), you can calculate by
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

    ll a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    if(max(c,d+1)<=a)
    {
        ans+=(a-max(c,d));
    }
    if(ans>0)
    {
        ans=ans*abs(min(a,b)-d+1);
        set<ll>s;
        for(int i=max(c,d+1); i<=a; i++)
        {
            s.insert(i);
        }
        for(int i=d; i<=min(a,b); i++)
        {
            s.insert(i);
        }
        if(s.size()<ans)
        {
            ans=ans-abs(ans-s.size());
        }
        cout<<ans<<endl;
        for(int i=max(c,d+1); i<=a; i++)
        {
            for(int j=d; j<=min(a,b); j++)
            {
                if(i>j)
                {
                    cout<<i<<" "<<j<<endl;
                }
                else
                {
                    break;
                }
            }
        }
        return 0;
    }
    cout<<ans<<endl;
}
