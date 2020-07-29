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

string a;

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int>v;
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end());
    ll sum=0, a1=0, a2=0;
    if(a%v[0]==0)
    {
        sum+=a/v[0];
    }
    else if(a%v[0]!=0)
    {
        a-=v[1];
        if(a>=0)
        {
            a1+=v[1];
        }
        sum+=a/v[0];
        a1+=a%v[0];
    }
    if(a1%v[1]==0)
    {
        sum+=a1/v[1];
    }
    else if(a1%v[1]!=0)
    {
        a1-=v[2];
        if(a1>=0)
        {
            a2+=v[2];
        }
        sum+=a/v[1];
        a2+=a1%v[1];
    }
    sum+=a2/v[2];
    cout<<sum<<endl;
}
