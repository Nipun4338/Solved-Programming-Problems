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
1.always remember for ncr(n,2), you can calculate by
n*(n-1)/2
2.Power of 2 ->  (1ll<<i)
*/

vector<int>visited(205,0),color(205,0);
vector<vector<int>>v;

bool dfs(int source)
{
    bool ret=true;
    for(int i=0; i<v[source].size(); i++)
    {
        if(color[v[source][i]]!=0 && color[source]==color[v[source][i]])
        {
            return false;
        }
        if(color[v[source][i]]==0)
        {
            if(color[source]==1)
            {
                color[v[source][i]]=2;
            }
            else
            {
                color[v[source][i]]=1;
            }
            ret = ret & dfs(v[source][i]);
        }
    }
    return ret;
}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    int a,b,c,d;
    cin>>b;
    v.clear();
    v.resize(b+1);
    color.assign(b+1,0);
    for(int i=0; i<b; i++)
    {
        while(true)
        {
            cin>>c;
            if(c==0)
            {
                break;
            }
            v[i+1].push_back(c);
            v[c].push_back(i+1);
        }
    }
    color[1]=1;
    bool check=dfs(1);
    if(!check)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=1; i<=b; i++)
        {
            if(color[i]==1)
            {
                cout<<0;
            }
            else
            {
                cout<<1;
            }
        }
        cout<<endl;
    }
}

/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/
