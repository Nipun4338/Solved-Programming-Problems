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
    for(int i=0; i<63; i++)
    {
        v1.push_back(pow(2,i));
        //cout<<v1[i]<<endl;
    }
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
        ll temp1=INT_MAX;
        ll temp2=INT_MIN;
        if(b>1)
        {
            bool flag=false;

            for(int i=1; i<b; i++)
            {
                if(v[i]<v[i-1])
                {
                    flag=true;
                    temp1=min(temp1,v[i]);
                    temp2=max(temp2,v[i-1]);
                }
            }
            if(flag)
            {
                //cout<<temp2<<" "<<temp1<<endl;
                temp2=temp2-temp1;
                sum=lower_bound(v1.begin(),v1.end(),temp2)-v1.begin();
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}
