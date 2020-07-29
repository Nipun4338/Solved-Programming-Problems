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

    string a;
    cin>>a;
    vector<int>v;
    for(int i=0; i<a.size(); i++)
    {
        int temp=a[i]-'0';
        if(temp%2==0)
        {
            v.push_back(temp);
        }
    }
    if(v.size()==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        sort(v.begin(),v.end());
        char temp=v[v.size()-1]+'0';
        int temp1;
        for(int i=a.size()-1; i>=0; i--)
        {
            if(a[i]==temp)
            {
                temp1=i;
                break;
            }
        }
        char x=a[a.size()-1];
        a[temp1]=x;
        a[a.size()-1]=temp;
        cout<<a<<endl;
    }
}
