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

#define pi acos(-1.0)
#define mod 1000000007

///Library
#define mem(a,b) memset(a,b,sizeof(a))
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define SortA(ar,s) sort(ar,ar+s)
#define SortD(ar,s) sort(ar,ar+s,greater<int>())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sq(x) (x)*(x)


///vector
#define Lower_bound(vec,value) lower_bound(vec.begin(),vec.end(),value)
#define Upper_bound(vec,value) upper_bound(vec.begin(),vec.end(),value)


//template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
//template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
ll x[26];

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    fast
    ll a,b;

    cin>>a>>b;
    string c[a];
    for(int i=0; i<a; i++)
    {
        cin>>c[i];
    }
    deque<string>l;
    vector<string>v;
    ll flag=0,flag1=0;
    for(int i=0; i<a; i++)
    {
        string d;
        d=c[i];
        reverse(d.begin(),d.end());
        for(int j=i+1; j<a; j++)
        {
            if(j!=i && d==c[j])
            {
                l.push_back(c[j]);
                l.push_front(c[i]);
                flag1=1;
                break;
            }
            flag1=0;
        }
        if(d==c[i] && flag==0 && flag1==0)
        {
            flag=1;
            v.push_back(d);
        }
    }
    ll sum=l.size();
    if(flag==1)
    {
        sum++;
    }
    cout<<sum*b<<endl;
    if(a==1)
    {
        string d;
        d=c[0];
        reverse(d.begin(),d.end());
        if(d==c[0])
        {
            cout<<d<<endl;
            return 0;
        }
    }
    for(int i=0; i<l.size(); i++)
    {
        cout<<l[i];
        if(((sum-1)/2)==i+1)
        {
            cout<<v[0];
        }
    }
    cout<<endl;
}

