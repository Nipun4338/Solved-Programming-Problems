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

# define M_PI           3.14159265358979323846
static double d2r(double d)
{
    return (d / 180.0) * ((double) M_PI);
}

/*
1.always remember for ncr(n,2), you can calculate by->
n*(n-1)/2
2.Power of 2 ->  (1ll<<i)
*/
ll sendme[2005][100];

ll fun(ll n, ll d)
{
    if(n == 1)
        return 1;
    if(sendme[n][d]!=0)
    {
        //cout<<sendme[n][d]<<endl;
        return sendme[n][d];
    }
    if(n % 2 == 1)
    {
        //cout<<sendme[n][d]<<endl;
        sendme[n][d]+= fun(n - 1, d) + (n - 1) * d;
    }
    else
    {
        //cout<<sendme[n][d]<<endl;
        sendme[n][d]+= fun(n - 1, d) - (n - 1) * d;
    }
    //cout<<sendme[n][d]<<endl;
    return sendme[n][d];
}

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
        cin>>b>>c;
        vector<ll>v,v1;
        for(int j=0; j<b; j++)
        {
            cin>>d;
            v1.push_back(d);
        }
        for(int j=0; j<b; j++)
        {
            cin>>d;
            v.push_back(d);
        }
        sort(all(v));
        sort(all(v1));
        ll sum=0,sum1=0;
        ll check=0,flag=0;
        ll l=0;
        for(int i=v.size()-1; i>v.size()-1-c; i--)
        {
            if(v[i]>v1[l])
            {
                v1[l]=v[i];
                l++;
            }
        }
        for(int i=0; i<v1.size(); i++)
        {
            sum+=v1[i];
        }
        cout<<sum<<endl;
    }
}

/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/