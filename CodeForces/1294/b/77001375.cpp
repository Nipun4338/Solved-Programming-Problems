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
        pair<ll,ll>p[b+1];
        p[0].first=0;
        p[0].second=0;
        for(int i=0; i<b; i++)
        {
            cin>>c>>d;
            p[i].first=c;
            p[i].second=d;
        }
        sort(p,p+b+1);
        ll flag=0;
        for(int i=2; i<b+1; i++)
        {
            if(p[i].second<p[i-1].second)
            {
                flag=1;
                break;
            }
        }
        vector<char>v;
        if(!flag)
        {
            for(int i=1; i<b+1; i++)
            {
                for(int j=0; j<(p[i].first-p[i-1].first); j++)
                {
                    v.push_back('R');
                }
                for(int j=0; j<(p[i].second-p[i-1].second); j++)
                {
                    v.push_back('U');
                }
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
    }
}
