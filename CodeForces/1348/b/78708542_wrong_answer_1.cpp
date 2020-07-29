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

/*always remember for ncr(n,2), you can calculate by
n*(n-1)/2  */

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d,e;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        set<ll>s,s1;
        vector<ll>v1,v2,v3;
        for(int i=0; i<b; i++)
        {
            cin>>d;
            s.insert(d);
            v1.push_back(d);
        }
        if(s.size()>c)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0; i<c; i++)
        {
            s1.insert(i+1);
            v3.push_back(i+1);
        }
        set<ll>s2;
        for(int i=0; i<v1.size(); i++)
        {
            for(int j=0; j<v3.size(); j++)
            {
                v2.push_back(v3[j]);
            }
        }
        cout<<v2.size()<<endl;
        for(int i=0; i<v2.size(); i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
}
