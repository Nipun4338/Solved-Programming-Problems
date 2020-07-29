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

ll nCr(int n, int r)
{

    ll p=1,k=1;
    if (n-r<r)
    {
        r=n-r;
    }
    if(r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
            ll m=__gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
    {
        p=1;
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

    ll a,b,c;
    cin>>a>>b;
    ll high=nCr(a-(b-1),2);
    ll x1=a/b;
    ll x2=a%b;
    ll x3=x2*(x1*(x1+1)/2)+(b-x2)*(x1*(x1-1)/2);
    cout<<x3<<" "<<high<<endl;
}
