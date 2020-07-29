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

int status[100000000/32];
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
set<ll> arr;
long long int l=0,a,b=10000000,n;



void sieve()
{
    long long int i,j,sqrtN;
    sqrtN = int( sqrt( b ) );
    for( i=3; i<=sqrtN; i+=2 )
    {
        if( Check(status[i/32],i%32)==0)
        {
            for(j=i*i; j<=b; j+=2*i)
            {
                status[j/32]=Set(status[j/32],j%32);
            }
        }
    }
    arr.insert(2);
    l=1;
    for(i=3; i<=b; i+=2)
    {
        if(Check(status[i/32],i%32)==0)
        {
            arr.insert(i);
            l++;
        }
    }
}

/*
1.always remember for ncr(n,2), you can calculate by
n*(n-1)/2
2.Power of 2 ->  (1ll<<i)
*/

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast
    sieve();
    vector<ll>v(all(arr));
    ll a,b,c;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
        ll sum=0;
        if(b%a!=0 || a>b)
        {
            cout<<0<<endl;
        }
        else if(a==b)
        {
            cout<<1<<endl;
        }
        else if(arr.find(b)!=arr.end() && a==1)
        {
            cout<<2<<endl;
        }
        else
        {
            b=b/a;
            for(int i=0; i<v.size() && v[i]<=b; i++)
            {
                if(b%v[i]==0)
                {
                    while(b%v[i]==0)
                    {
                        b=b/v[i];
                        sum++;
                    }
                }
            }
            if(b>1)
            {
                sum++;
            }
            cout<<sum+1<<endl;
        }
    }
}
