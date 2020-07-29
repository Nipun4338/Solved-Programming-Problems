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
char y[1000],z[1000];
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    int a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<int>v1,v2;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v1.push_back(c);
        }
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v2.push_back(c);
        }
        int flag1=0,flag=0,flag2;
        int temp=0;
        for(int i=0; i<b; i++)
        {
            if(v1[i]<v2[i] && flag1==0)
            {
                flag1=1;
                temp=v2[i]-v1[i];
            }
            else if(flag1 && v1[i]<v2[i])
            {
                if(v2[i]-v1[i]!=temp || flag==1)
                {
                    flag2=1;
                    break;
                }
            }
            else if(flag1 && v1[i]==v2[i])
            {
                flag=1;
            }
            else if(v1[i]>v2[i])
            {
                flag2=1;
                break;
            }
            flag2=0;
        }
        if(flag2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
