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
    ll a,b,c;
    string x,y;
    cin>>a;
    pair<ll,ll>p[10000];
    char d='a';
    vector<char>v;
    for(int i=0; i<26; i++)
    {
        v.push_back(d);
        d++;
    }
    while(a--)
    {
        cin>>b;
        getchar();
        cin>>x>>y;
        int flag,sum=0,x1[26]={0};
        for(int i=0; i<b; i++)
        {
            for(int j=0; j<26; j++)
            {
                if(v[j]==x[i])
                {
                    x1[j]++;
                }
                if(v[j]==y[i])
                {
                    x1[j]++;
                }
            }
        }
        for(int i=0; i<26; i++)
        {
            if(x1[i]%2==0)
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
            cout<<"No"<<endl;
            continue;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        int l=0;
        for(int i=0; i<b; i++)
        {
            int flag;
            if(x[i]!=y[i])
            {
                for(int j=i+1; j<b; j++)
                {
                    if(x[i]==x[j])
                    {
                        swap(x[j],y[i]);
                        p[l].first=j+1;
                        p[l].second=i+1;
                        l++;
                        flag=1;
                        break;
                    }
                    flag=0;
                }
                if(flag==0)
                {
                    for(int j=i+1; j<b; j++)
                    {
                        if(x[i]==y[j])
                        {
                            swap(y[j],y[i]);
                            p[l].first=j+1;
                            p[l].second=i+1;
                            l++;
                            break;
                        }
                    }
                }
            }
        }
        //cout<<x<<" "<<y<<endl;
        if(x==y)
        {
            cout<<"Yes"<<endl;
            for(int i=0; i<l; i++)
            {
                cout<<p[i].first<<" "<<p[i].second<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
