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

    ll a,b,c,d1=0,d2=0;
    vector<ll>v;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        if(c<0)
        {
            d1++;
        }
        else
        {
            d2++;
        }
        v.eb(c);
    }
    sort(v.begin(),v.end());
    ll sum=0;
    if(d1<b)
    {
        if(d2==0)
        {
            for(int i=0; i<a-1; i++)
            {
                sum=sum+((-1)*v[i]);
                b--;
            }
            if(b%2==0)
            {
                sum=sum+v[a-1];
            }
            else
            {
                sum=sum-v[a-1];
            }
        }
        else
        {
            for(int i=0; i<a; i++)
            {
                if(v[i]<0)
                {
                    sum=sum+((-1)*v[i]);
                    b--;
                }
                else
                {
                    sum=sum+v[i];
                }
            }
            if(b%2!=0 && d1!=0)
            {
                sum=sum-(2*min(v[d1-1],v[d1]));
            }
            else if(b%2!=0 && d1==0)
            {
                sum=sum-(2*v[0]);
            }
        }
    }
    if(d1>=b)
    {
        for(int i=0; i<b; i++)
        {
            sum=sum+((-1)*v[i]);
        }
        for(int i=b; i<a; i++)
        {
            sum=sum+v[i];
        }
    }
    cout<<sum<<endl;
}
