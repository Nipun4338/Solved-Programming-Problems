#include<bits/stdc++.h>
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define fast ios_base:: sync_with_stdio( false ); cin.tie(0); cout.tie(0);
#define eb              emplace_back
#define em              emplace
#define pb              push_back
#define Mp              make_pair
#define ff              first
#define ss              second
#define mod 1000000007
typedef long long ll;
using namespace std;

const int M = (int)(2e6 + 239);

ll gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}


int getnum(string a)
{
    int i,p=0;
    rep0(i,a.size())
    {
        p*=10;
        p+=a[i]-'0';
    }
    return p;
}

int main()
{
    fast

    ll a,b,c;
    cin>>a;
    while(a--)
    {
        vector<ll>v;
        cin>>b;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        if(v.size()%2==0)
        {
            for(int i=v.size()/2; i<v.size(); i++)
            {
                cout<<v[i]<<" "<<v[v.size()-i-1]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<v[v.size()/2]<<" ";
            for(int i=(v.size()/2)+1; i<v.size(); i++)
            {
                cout<<v[i]<<" "<<v[v.size()-i-1]<<" ";
            }
            cout<<endl;
        }
    }
}
