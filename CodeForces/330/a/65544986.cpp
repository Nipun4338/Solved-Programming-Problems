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

    ll a,b,c;
    cin>>a>>b;
    char x[a][b];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cin>>x[i][j];
        }
    }
    ll sum=0,sum1=0,sum2=0;
    for(int i=0; i<a; i++)
    {
        ll flag=0;
        for(int j=0; j<b; j++)
        {
            if(x[i][j]=='S')
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            sum1++;
            sum=sum+b;
        }
    }
    for(int i=0; i<b; i++)
    {
        ll flag=0;
        for(int j=0; j<a; j++)
        {
            if(x[j][i]=='S')
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            sum2++;
            sum=sum+a;
        }
    }
    cout<<sum-(sum2*sum1)<<endl;
}
