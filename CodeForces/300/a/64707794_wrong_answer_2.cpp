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

    int a,b,c,sum0=0,sum1=0,sum2=0;
    vector<int>v;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(b==0)
        {
            sum0++;
        }
        if(b<0)
        {
            sum1++;
        }
        if(b>0)
        {
            sum2++;
        }
        if(b!=0)
        {
            v.push_back(b);
        }
    }
    sort(v.begin(),v.end());
    cout<<1<<" "<<v[0]<<endl;
    sum1--;
    if(sum1%2==0)
    {
        cout<<sum1+sum2<<" ";
        for(int i=1; i<=sum1; i++)
        {
            cout<<v[i];
            if(i!=sum1)
            {
                cout<<" ";
            }
        }
        if(sum2!=0 && sum1!=0)
        {
            cout<<" ";
        }
        for(int i=sum1+1; i<=sum1+sum2; i++)
        {
            cout<<v[i];
            if(i!=sum1+sum2)
            {
                cout<<" ";
            }
        }
        cout<<endl;

        cout<<"1 0"<<endl;
    }
    else
    {
        if(sum1!=0)
        {
            sum1--;
        }
        cout<<sum1+sum2<<" ";
        for(int i=2; i<=sum1; i++)
        {
            cout<<v[i];
            if(i!=sum1)
            {
                cout<<" ";
            }
        }
        if(sum2!=0 && sum1!=0)
        {
            cout<<" ";
        }
        for(int i=sum1+2; i<=sum1+sum2+1; i++)
        {
            cout<<v[i];
            if(i!=sum1+sum2)
            {
                cout<<" ";
            }
        }
        cout<<endl;

        cout<<"2 "<<v[1]<<" 0"<<endl;
    }
}
