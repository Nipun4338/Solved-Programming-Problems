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
const double pi = 3.14159265358979323846;
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

int main()
{
    fast

    ll a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<ll>v,v1;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        bool flag=0, flag1=0, flag2=0, flag0=0;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            if(i>0 && v[i-1]==1)
            {
                flag1=1;
            }
            if(i>0 && v[i-1]==-1)
            {
                flag2=1;
            }
            if(i>0 && v[i-1]==0)
            {
                flag0=1;
            }
            if(i==0 && c!=v[i])
            {
                flag=1;
            }
            else if(i>0 && c==0 && !flag2 && !flag0)
            {
                flag=1;
            }
            else if(i>0 && c<0 && !flag2)
            {
                flag=1;
            }
            else if(i>0 && c>0 && !flag1)
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}


