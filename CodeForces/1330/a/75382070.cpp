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

    ll a,b,c,d,e;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        set<ll>s;
        for(int i=0; i<b; i++)
        {
            cin>>d;
            s.insert(d);
        }
        //vector<ll>v(all(s));
        //sort(v.begin(),v.end());
        ll l=0,sum=0,temp=0;
        for(int i=1; i<=400; i++)
        {
            if(s.find(i)==s.end() && sum<c)
            {
                //s.insert(i);
                sum++;
            }
            else if(sum==c && s.find(i)==s.end())
            {
                temp=i-1;
                break;
            }
        }
        cout<<temp<<endl;
    }
}
