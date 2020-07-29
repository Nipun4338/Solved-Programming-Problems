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

    int a,b,c,d,x=0,x1=0,x2=0,y1=0,y2=0;
    cin>>a>>b>>c>>d;
    if(a==c)
    {
        x=abs(b-d);
    }
    else
    {
        x=abs(a-c);
    }
    if(a!=c && b!=d)
    {
        if(abs(a-c)!=abs(b-d))
        {
            cout<<-1<<endl;
            return 0;
        }
        else
        {
            x1=a;
            y1=d;
            x2=c;
            y2=b;
        }
    }
    else
    {
        if(a==c)
        {
            if(x1+x+a<=1000 && x1+x+a>=-1000)
            {
                x1=x1+x+a;
                y1=b;
                x2=x2+x+a;
                y2=d;
            }
            else
            {
                x1=x1-x+a;
                y1=b;
                x2=x2-x+a;
                y2=d;
            }
        }
        else if(b==d)
        {
            if(y1+x+b<=1000 && y1+x+b>=-1000)
            {
                x1=a;
                y1=y1+x+b;
                x2=c;
                y2=y1+x+b;
            }
            else
            {
                x1=a;
                y1=y1-x+b;
                x2=c;
                y2=y1-x+b;
            }
        }
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
}
