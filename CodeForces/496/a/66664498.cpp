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
    cin>>a;
    vector<int>v,v2,v3;
    while(a--)
    {
        cin>>b;
        v.push_back(b);
    }
    int sum=0;
    for(int i=1; i<v.size()-1; i++)
    {
        vector<int>v1(v.begin(),v.end());
        v1.erase(v1.begin()+i);
        for(int j=0; j<v1.size()-1; j++)
        {
            v2.push_back(v1[j+1]-v1[j]);
        }
        sort(v2.begin(),v2.end());
        v3.push_back(v2[v2.size()-1]);
        v2.clear();
        v1.clear();
    }
    sort(v3.begin(),v3.end());
    cout<<v3[0]<<endl;
}
