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

int main()
{
    fast
    ll a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        pair<ll,ll>p[b];
        bool flag=false;
        for(int i=0; i<b; i++)
        {
            cin>>c>>d;
            p[i].first=c;
            p[i].second=d;
        }
        for(int i=1; i<b; i++)
        {
            if(p[i].second>p[i-1].second && p[i].first<=p[i-1].first)
            {
                flag=1;
                break;
            }
            else if(p[i].second<p[i-1].second || p[i].first<p[i-1].first)
            {
                flag=1;
                break;
            }
        }
        if(flag || (c<d))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
