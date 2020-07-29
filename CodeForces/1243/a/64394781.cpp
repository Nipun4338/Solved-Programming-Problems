#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll inf = 1e9;
const ll mod = 1e9 + 7;
const double eps = 1e-8;
const ll MAX = 1e7 + 20;
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);
#define eb              emplace_back
#define em              emplace
#define pb              push_back
#define Mp              make_pair
#define ff              first
#define ss              second
#define all(a)          a.begin(),a.end()
#define rep(i,n)        for(int i=0;i<n;i++)
#define rep1(i,n)       for(int i=1;i<=n;i++)
#define rrep(i,a,n)     for(int i=a;i<=n;i++)
#define per(i,n,a)      for(int i=n;i>=a;i--)
#define pf(n)           printf("%lld",n)
#define pfi(n)          printf("%d",n)
#define sp              printf(" ")
#define ln              "\n"

template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}
vector<ll>v,v1,v2;

int main()
{
    fast
    ll a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<ll>v,v2;
        set<ll>s;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
            s.insert(c);
        }
        sort(v.begin(),v.end());
        for(int i=1; i<=v[v.size()-1]; i++)
        {
            ll temp=b-(lower_bound(v.begin(),v.end(),i)-v.begin());
            //cout<<temp<<endl;
            if(temp>=i)
            {
                v2.push_back(i);
            }
        }
        //cout<<v2.size()<<endl;
        sort(v2.begin(),v2.end());
        cout<<v2[v2.size()-1]<<endl;
    }
}
