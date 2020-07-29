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

void decitobinbitodeci()
{
    string binary = bitset<8>(128).to_string(); //to binary
    cout<<binary<<"\n";

    unsigned long decimal = bitset<8>(binary).to_ulong();
    cout<<decimal<<"\n";
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

/*
1.always remember for ncr(n,2), you can calculate by->
n*(n-1)/2
2.Power of 2 ->  (1ll<<i)
*/

int level[10000],f,x=0,y;
vector<vector<int>>v;

void bfs(int source)
{
    queue<int> Q;
    Q.push(source);
    level[source]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int V=v[u][i];
            if(level[V]==-1)
            {
                level[V]=level[u]+1;
                Q.push(V);
            }
        }
    }
}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b=0,c,d,e;
    while(true)
    {
        cin>>a;
        if(a==0)
        {
            break;
        }
        v.clear();
        v.resize(10000);
        set<ll>s;
        for(int i=0; i<a; i++)
        {
            cin>>c>>d;
            s.insert(c);
            s.insert(d);
            v[c].push_back(d);
            v[d].push_back(c);
        }
        vector<ll>v1(all(s));
        while(true)
        {
            cin>>e>>f;
            if(e+f==0)
            {
                break;
            }
            b++;
            memset(level,-1,sizeof(level));
            bfs(e);
            for(int i=0; i<v1.size(); i++)
            {
                if(level[v1[i]]>f || level[v1[i]]<0)
                {
                    x++;
                }
            }
            cout<<"Case "<<b<<": "<<x<<" nodes not reachable from node "<<e<<" with TTL = "<<f<<"."<<endl;
            x=0;
        }
    }
}

/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/
