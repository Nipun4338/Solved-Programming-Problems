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

    ll a,b,c,d;
    cin>>a;
    while(a--)
    {
        cin>>b>>c>>d;
        vector<char>v,v1;
        char x='a';
        for(int i=0; i<26; i++)
        {
            v.push_back(x);
            x++;
        }
        if(c==d)
        {
            ll temp=0;
            for(int i=0; i<b; i++)
            {
                v1.push_back(v[temp]);
                temp++;
                if(temp==26)
                {
                    temp=0;
                }
            }
        }
        else if(d==1)
        {
            ll temp=0;
            for(int i=0; i<b; i++)
            {
                v1.push_back(v[temp]);
            }
        }
        else
        {
            ll temp=0, flag=0;
            while(true)
            {
                for(int i=0; i<d; i++)
                {
                    v1.push_back(v[temp]);
                    temp++;
                    if(v1.size()==b)
                    {
                        flag=1;
                        break;
                    }
                }
                temp=0;
                if(v1.size()==b || flag)
                {
                    break;
                }
            }
        }
        for(int i=0; i<v1.size(); i++)
        {
            cout<<v1[i];
        }
        cout<<endl;
    }
}
