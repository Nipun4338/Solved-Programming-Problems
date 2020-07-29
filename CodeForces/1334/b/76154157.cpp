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
    double a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        double temp=0, sum=0;
        vector<ll>v;
        for(int i=0; i<b; i++)
        {
            cin>>d;
            v.push_back(d);
        }
        sort(v.begin(),v.end(), greater<ll>());
        for(int i=0; i<b; i++)
        {
            if(v[i]>=c)
            {
                sum++;
                temp+=(v[i]-c);
            }
            else if(v[i]+temp>=c)
            {
                sum++;
                temp-=(c-v[i]);
            }
            else
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
}
