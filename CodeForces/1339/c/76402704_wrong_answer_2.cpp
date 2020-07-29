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

ll gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
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

int main()
{
    fast

    ll a,b,c;
    vector<ll>v1;
    ll sum1=0;
    for(int i=0; i<62; i++)
    {
        sum1+=pow(2,i);
        v1.push_back(sum1);
        //cout<<v1[i]<<endl;
    }
    //cout<<sum1<<endl;
    cin>>a;
    while(a--)
    {
        cin>>b;
        vector<ll>v;
        for(int i=0; i<b; i++)
        {
            cin>>c;
            v.push_back(c);
        }
        ll sum=0;
        if(b>1)
        {
            for(int i=1; i<b; i++)
            {
                if(v[i]<v[i-1])
                {
                    ll temp1=abs(v[i]-v[i-1]);
                    ll temp=lower_bound(v1.begin(),v1.end(), temp1)-v1.begin();
                    temp++;
                    v[i]+=v1[temp-1];
                    if(v[i]<v[i-1])
                    {
                        v[i]-=v1[temp-1];
                        temp++;
                        v[i]+=v1[temp-1];
                    }
                    sum=max(sum,temp);
                }
            }
        }
        cout<<sum<<endl;
    }
}
