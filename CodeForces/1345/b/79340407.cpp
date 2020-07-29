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
int dp[100];

ll F(ll n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    dp[n]=F(n-1)+F(n-2);
    return dp[n];
}


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    set<ll>s;
    ll sum=2;
    s.insert(sum);
    for(int i=0; i<40000; i++)
    {
        sum=sum+((i+2)*2)+i+1;
        s.insert(sum);
    }
    vector<ll>v(all(s));
    //cout<<v[v.size()-1]<<endl;
    ll sum2=0;
    vector<ll>v1;
    for(int i=0; i<v.size(); i++)
    {
        sum2+=v[i];
        v1.push_back(sum2);
    }
    //cout<<v1[v1.size()-1]<<endl;
    ll a,b,c=0;
    cin>>a;
    while(a--)
    {
        cin>>b;
        if(b<2)
        {
            cout<<0<<endl;
        }
        else
        {
            if(s.find(b)!=s.end())
            {
                cout<<1<<endl;
            }
            else
            {
                ll x=upper_bound(v.begin(),v.end(),b)-v.begin();
                if(v[x]>b)
                {
                    x--;
                }
                ll flag=0,d=0;
                for(int i=x; i>=0; i--)
                {
                    //cout<<v[i]<<endl;
                   if(b-v[i]<0)
                   {
                       continue;
                   }
                   else
                   {
                       ll temp=b/v[i];
                       b-=temp*v[i];
                       c+=temp;
                   }
                }
                cout<<c<<endl;
                c=0;
            }
        }
    }
}
