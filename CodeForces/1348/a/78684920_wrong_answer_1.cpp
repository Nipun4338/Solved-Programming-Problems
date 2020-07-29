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

    ll a,b,c,d;
    vector<ll>v;
    for(int i=1; i<32; i++)
    {
        v.push_back(pow(2,i));
    }
    cin>>a;
    while(a--)
    {
        cin>>b;
        ll sum=0,sum1=0;
        ll x=b/2;
        ll x1=x/2;
        ll x2;
        if(b==2)
        {
            cout<<2<<endl;
            continue;
        }
        if(x%2!=0 && x!=1)
        {
            x1++;
            x2=x%2;
        }
        else
        {
            x2=x1;
        }
        //cout<<x1<<" "<<x2<<endl;
        for(int i=0; i<x1; i++)
        {
           sum+=v[i];
           //cout<<sum<<endl;
        }
        for(int i=b-1; i>=b-x2; i--)
        {
           sum+=v[i];
        }
        for(int i=x1; i<b-x2; i++)
        {
            sum1+=v[i];
        }
        //cout<<sum<<" "<<sum1<<endl;
        cout<<abs(sum-sum1)<<endl;
    }
}
