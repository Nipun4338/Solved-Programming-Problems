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
        vector<ll>v1,v2;
        for(int i=max(c,d+1); i<=a; i++)
        {
            for(int j=d; j<=min(a,b); j++)
            {
                if(i>j)
                {
                    v1.push_back(i);
                    v2.push_back(j);
                }
                else
                {
                    break;
                }
            }
        }
        cout<<v1.size()<<endl;
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v1[i]<<" "<<v2[i]<<endl;
        }
        return 0;
    }
    cout<<ans<<endl;
}
