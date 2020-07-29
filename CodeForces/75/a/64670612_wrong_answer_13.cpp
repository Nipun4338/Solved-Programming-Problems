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

deque<ll>v;
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d,sum=0,sum1=0,sum2=0;
    cin>>a>>b;
    c=a+b;
    string x1,x2,x3;
    x1=to_string(a);
    x2=to_string(b);
    x3=to_string(c);
    int l=0;
    for(int i=x1.size()-1; i>=0; i--)
    {
        if(x1[i]!='0')
        {
            int temp=x1[i]-'0';
            sum=sum+(temp*pow(10,l));
            l++;
        }
    }
    l=0;
    for(int i=x2.size()-1; i>=0; i--)
    {
        if(x2[i]!='0')
        {
            int temp=x2[i]-'0';
            sum1=sum1+(temp*pow(10,l));
            l++;
        }
    }
    l=0;
    for(int i=x3.size()-1; i>=0; i--)
    {
        if(x3[i]!='0')
        {
            int temp=x3[i]-'0';
            sum2=sum2+(temp*pow(10,l));
            l++;
        }
    }
    if(sum+sum1==sum2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    //cout<<sum<<" "<<sum1<<" "<<sum2<<endl;
}
