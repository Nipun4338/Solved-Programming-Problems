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

    ll a,b,c,d;
    cin>>a;
    vector<tuple<ll,ll,ll> >t;
    for(int i=0; i<a-2; i++)
    {
        vector<ll>v2;
        cin>>b>>c>>d;
        v2.push_back(b);
        v2.push_back(c);
        v2.push_back(d);
        sort(v2.begin(),v2.end());
        t.eb(make_tuple(v2[0],v2[1],v2[2]));
    }
    sort(t.begin(),t.end());
    deque<ll>v;
    multiset<ll>s;
    v.push_back(get<0>(t[a-2-1]));
    v.push_back(get<1>(t[a-2-1]));
    v.push_back(get<2>(t[a-2-1]));
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    s.insert(get<0>(t[a-2-1]));
    s.insert(get<1>(t[a-2-1]));
    s.insert(get<2>(t[a-2-1]));
    for(int i=a-2-2; i>=0; i--)
    {
        if(s.count(get<0>(t[i]))==0)
        {
            v.push_front(get<0>(t[i]));
            s.insert(get<0>(t[i]));
        }
        if(s.count(get<1>(t[i]))==0)
        {
            v.push_front(get<1>(t[i]));
            s.insert(get<1>(t[i]));
        }
        if(s.count(get<2>(t[i]))==0)
        {
            v.push_front(get<2>(t[i]));
            s.insert(get<2>(t[i]));
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
