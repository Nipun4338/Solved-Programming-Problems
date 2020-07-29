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

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    string a;
    deque<char>d;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        d.emplace_back(a[i]);
    }
    int flag=0;
    while(d.size()!=0)
    {
        if(d.size()>=3 && d[0]=='1' && d[1]=='4' && d[2]=='4')
        {
            d.pop_front();
            d.pop_front();
            d.pop_front();
        }
        if(d.size()>=2 && d[0]=='1' && d[1]=='4')
        {
            d.pop_front();
            d.pop_front();
        }
        if(d.size()>=1 && d[0]=='1')
        {
            d.pop_front();
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag && d.size()!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
