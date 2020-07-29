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

    int a,b,c,d;
    cin>>a;
    deque<int>v;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        v.emplace_back(b);
    }
    sort(v.begin(),v.end());
    vector<int>v1[a/3];
    for(int i=0; i<a/3; i++)
    {
        v1[i].emplace_back(v[0]);
        int temp=v[0];
        v.erase(v.begin()+0);
        vector<int>v2;
        for(int j=0; j<v.size(); j++)
        {
            if(v[j]%temp==0 && temp<v[j])
            {
                temp=v[j];
                v1[i].emplace_back(temp);
                v2.emplace_back(j);
            }
            if(v1[i].size()==3)
            {
                //cout<<v2[0]<<" "<<v2[1]<<" "<<v1[i].size()<<endl;
                v.erase(v.begin()+v2[1]);
                v.erase(v.begin()+v2[0]);
                break;
            }
        }
    }
    int flag;
    for(int i=0; i<a/3; i++)
    {
        //cout<<v1[i].size()<<endl;
        if(v1[i].size()==3)
        {
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0; i<a/3; i++)
    {
        cout<<v1[i][0]<<" "<<v1[i][1]<<" "<<v1[i][2]<<endl;
    }
}
