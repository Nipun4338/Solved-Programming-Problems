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

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    multiset<int>s;
    map<int,int>m;
    int a,b,c,d;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        m[b]++;
    }
    if(m[5]>0 || m[7]>0)
    {
        cout<<-1<<endl;
    }
    int x=m[1], y=m[2]+m[3], z=m[4]+m[6];

    if(!(x==y && y==z) || m[3]>m[6])
    {
        cout<<-1<<endl;
    }

    while(m[3]--)
    {
        cout<<"1 3 6"<<endl;
        m[6]--;
    }
    while(m[6]--)
    {
        cout<<"1 2 6"<<endl;
        m[2]--;
    }
    while(m[2]--)
    {
        cout<<"1 2 4"<<endl;
    }
}
