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

    int a,b,c,d,sum=0;
    cin>>a;
    set<int>s,s1;
    vector<int>v;
    int flag=0;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(b>0)
        {
            if(s1.find(b)!=s1.end() && s.size()!=0)
            {
                s1.insert(b);
                flag=1;
                sum=0;
                break;
            }
            else
            {
                s1.insert(b);
            }
            s.insert(b);
        }
        else if(b<0 && s.find((-1)*b)!=s.end())
        {
            s.erase((-1)*b);
            if(s.size()==0 && flag!=1)
            {
                v.push_back(i+1);
                sum++;
                flag=0;
                s1.clear();
            }
        }
    }
    ll sum2=0;
    if(v.size()>=1)
    {
        sum2=sum2+v[0];
    }
    for(int i=1; i<v.size(); i++)
    {
        sum2=sum2+(v[i]-v[i-1]);
    }
    if(sum==0)
    {
        cout<<-1<<endl;
    }
    else if(sum==1 && sum2==a)
    {
        cout<<sum<<endl<<v[0]<<endl;
    }
    else if(sum>1 && sum2==a)
    {
        cout<<sum<<endl;
        cout<<v[0]<<" ";
        for(int i=1; i<v.size(); i++)
        {
            cout<<v[i]-v[i-1];
            if(i!=v.size()-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
