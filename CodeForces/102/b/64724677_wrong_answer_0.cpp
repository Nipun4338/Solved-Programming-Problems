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
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    string a;
    cin>>a;
    ll sum=0;
    for(int i=0; i<a.size(); i++)
    {
        sum=sum+(a[i]-'0');
    }
    ll sum1=0,sum2=0;
    if(sum<10)
    {
        cout<<1<<endl;
        return 0;
    }
    else
    {
        sum2=1;
    }
    while(true)
    {
        if(sum<10)
        {
            sum1=sum1+(sum%10);
            sum=sum1;
            sum1=0;
            sum2++;
            if(sum1<10 && sum<10)
            {
                break;
            }
            //cout<<sum<<endl;
        }
        sum1=sum1+(sum%10);
        sum/=10;
    }
    cout<<sum2<<endl;
}
