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

int main()
{
    ll a,b,c;
    string x,y,x1,y1;
    cin>>a;
    char d='a';
    vector<char>v;
    for(int i=0; i<26; i++)
    {
        v.push_back(d);
        d++;
    }
    while(a--)
    {
        cin>>b;
        getchar();
        cin>>x>>y;
        vector<ll>v;
        for(int i=0; i<b; i++)
        {
            if(x[i]!=y[i])
            {
                v.push_back(i);
            }
        }
        //cout<<sum<<endl;
        if(v.size()!=2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if(x[v[0]]==x[v[1]] && y[v[0]]==y[v[1]])
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
