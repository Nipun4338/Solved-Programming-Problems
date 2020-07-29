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
1.always remember for ncr(n,2), you can calculate by->
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

    ll a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b;
        unordered_map<ll,ll>s;
        vector<ll>v;
        set<ll>s1,s2;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            s[c]++;
            s1.insert(c);
            v.push_back(c);
        }
        for(int i=0; i<v.size()-1; i++)
        {
            ll x=0;
            x+=v[i];
            for(int j=i+1; j<v.size(); j++)
            {
                x+=v[j];
                s2.insert(x);
            }
        }
        vector<ll>v1(s2.begin(),s2.end());
        ll sum=0;
        for(int i=0; i<s2.size(); i++)
        {
            if(s1.find(v1[i])!=s1.end())
            {
                sum+=s[v1[i]];
            }
        }
        cout<<sum<<endl;
    }
}

/*Remember Remember, if you are so much excited that
your mind is shaking,
this is not the last contest that you are proceeding now,
if Almighty wants,
time will come.*/
