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
int c;
set<ll>s;
map<ll,ll>m,m1;


const int M = (int)(2e6 + 239);

// Driver code

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c;
    cin>>a;
    while(a--)
    {
        string x;
        cin>>b;
        cin>>x;
        vector<int>v,v1;
        v.push_back(1);
        v1.push_back(1);
        bool flag=false;
        for(int i=1; i<b; i++)
        {
            int temp=x[i]-'0';
            if(temp==2 && !flag)
            {
                v.push_back(1);
                v1.push_back(1);
            }
            else if(temp==2 && flag)
            {
                v.push_back(0);
                v1.push_back(2);
            }
            else if(temp==1 && !flag)
            {
                v.push_back(1);
                v1.push_back(0);
                flag=true;
            }
            else if(temp==1 && flag)
            {
                v.push_back(0);
                v1.push_back(1);
            }
            else
            {
                v.push_back(0);
                v1.push_back(0);
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v1[i];
        }
        cout<<endl;
    }

}
