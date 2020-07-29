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


int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    ll a,b,c,d,e;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        vector<ll>v,v1;
        for(int i=0; i<b; i++)
        {
            cin>>d;
            v.push_back(d);
        }
        for(int i=1; i<v.size()-1; i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                v1.push_back(i+1);
            }
        }
        ll temp=0,temp1=0,temp2=0,l=0;
        pair<ll,ll>p[v1.size()];
        ll flag1=0;
        if(v1.size()>=1)
        {
            for(int i=0; i<v1.size()-1; i++)
            {
                ll flag=0;
                for(int j=i+1; j<v1.size(); j++)
                {
                    ll x=v1[j]-v1[i];
                    if(v1[j]-v1[i]+2<=c)
                    {
                        flag=1;
                        flag1=1;
                        temp++;
                        p[l].first=temp;
                        p[l].second=v1[i]-abs(x+2-c);
                        if(v1[j]<c)
                        {
                            p[l].second=1;
                        }
                    }
                    else
                    {
                        if(flag)
                        {
                            temp--;
                            l++;
                        }
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    l++;
                }
            }
            if(l==0)
            {
                l++;
            }
            ll x1=p[l-1].first;
            ll x2;
            sort(p,p+l);
            if(flag1)
            {
                for(int i=0; i<l; i++)
                {
                    if(p[i].first==x1)
                    {
                        x2=p[i].second;
                        break;
                    }
                }
                cout<<x1+1+1<<" "<<x2<<endl;
            }
            else
            {
                ll y=v1[0];
                if(y<c)
                {
                    cout<<2<<" "<<1<<endl;
                }
                else
                {
                    y=abs(y-c+2);
                    cout<<2<<" "<<y<<endl;
                }
            }
        }
        else
        {
            if(v1.size()==0)
            {
                cout<<"0 0"<<endl;
            }
        }
    }
}
