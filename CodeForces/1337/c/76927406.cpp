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
vector<ll>graph[M],v;

ll dfs(int u, int vis, int depth)
{
    int child=0;
    for(int i=0; i<graph[u].size(); i++)
    {
        if(graph[u][i]==vis)
        {
            continue;
        }
        child+=1+dfs(graph[u][i],u,depth+1);
    }
    if(vis!=-1)
    {
        v.push_back(depth-child);
    }
    return child;
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
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d;
    cin>>a>>b;
    for(int i=0; i<a-1; i++)
    {
        cin>>c>>d;
        graph[c-1].push_back(d-1);
        graph[d-1].push_back(c-1);
    }

    dfs(0,-1,0);
    sort(v.begin(),v.end(),greater<ll>());
    ll sum=0;
    for(int i=0; i<min(b,(ll)v.size()); i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
}
