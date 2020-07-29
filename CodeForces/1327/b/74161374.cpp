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


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b;
        map<ll,ll>m;
        set<ll>s[b+1],s1;
        set<ll>::iterator it;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            for(int k=0; k<c; k++)
            {
                cin>>d;
                s[i].insert(d);
            }
        }
        vector<ll>vis(b+1,0);
        for(int i=0; i<b; i++)
        {
            it=s[i].begin();
            for(int j=0; j<s[i].size(); j++)
            {
                if(s1.find(*it)==s1.end())
                {
                    s1.insert(*it);
                    vis[i]=1;
                    break;
                }
                it++;
            }
        }
        bool flag=false;
        for(int i=0; i<b; i++)
        {
            if(vis[i]!=1)
            {
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            cout<<"OPTIMAL"<<endl;
        }
        else
        {
            cout<<"IMPROVE"<<endl;
            for(int i=0; i<b; i++)
            {
                if(vis[i]!=1)
                {
                    cout<<i+1<<" ";
                    break;
                }
            }
            for(int i=1; i<=b; i++)
            {
                if(s1.find(i)==s1.end())
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }

}
