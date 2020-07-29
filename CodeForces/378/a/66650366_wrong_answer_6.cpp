/*For the name of God*/

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

    int a,b,c;
    cin>>a>>b;

    if(a==b)
    {
        cout<<"0 6 0"<<endl;
    }
    else if(abs(a-b)==1)
    {
        if(a>b)
        {
            cout<<6-a+1<<" 0 "<<b-1+1<<endl;
        }
        else
        {
            cout<<6-b+1<<" 0 "<<a-1+1<<endl;
        }
    }
    else if(abs(a-b)==2)
    {
        if(a>b)
        {
            cout<<6-a+1<<" 1 "<<b-1+1<<endl;
        }
        else
        {
            cout<<a-1+1<<" 1 "<<6-b+1<<endl;
        }
    }
    else if(abs(a-b)==3)
    {
        if(a>b)
        {
            cout<<6-a+2<<" 0 "<<b-1+2<<endl;
        }
        else
        {
            cout<<a-1+2<<" 0 "<<6-b+2<<endl;
        }
    }
    else if(abs(a-b)==4)
    {
        if(a>b)
        {
            cout<<6-a+2<<" 1 "<<b-1+2<<endl;
        }
        else
        {
            cout<<a-1+2<<" 1 "<<6-b+2<<endl;
        }
    }
    else
    {
        cout<<"3 0 3"<<endl;
    }
}
