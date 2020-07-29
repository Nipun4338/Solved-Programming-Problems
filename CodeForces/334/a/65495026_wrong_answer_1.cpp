#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
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
const int N = 200200;

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a;
    cin>>a;
    vector<ll>v1,v2;
    for(int i=(a/2)+1; i<=a+(a/2); i++)
    {
        v2.push_back(i);
    }
    set<ll>s(v2.begin(),v2.end());
    for(int i=1; i<=a*2; i++)
    {
        if(s.find(i)==s.end())
        {
            v1.push_back(i);
        }
    }
    for(int j=0; j<a; j++)
    {
        cout<<v1[j];
        if(j!=a-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    for(int j=0; j<a; j++)
    {
        cout<<v2[j];
        if(j!=a-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
