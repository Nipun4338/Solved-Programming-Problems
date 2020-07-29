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

string a;

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    fast

    int x;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        cin>>a;
        set<char>s;
        for(int j=0; j<a.size(); j++)
        {
            s.insert(a[j]);
        }
        if(a.size()<=2)
        {
            cout<<a<<endl;
        }
        else if(s.size()==1)
        {
            cout<<a<<endl;
        }
        else
        {
            if(a[0]=='1')
            {
                for(int j=0; j<2*a.size(); j++)
                {
                    if((j+1)%2==1)
                    {
                        cout<<1;
                    }
                    else
                    {
                        cout<<0;
                    }
                }
            }
            else
            {
                for(int j=0; j<2*a.size(); j++)
                {
                    if((j+1)%2==1)
                    {
                        cout<<0;
                    }
                    else
                    {
                        cout<<1;
                    }
                }
            }
            cout<<endl;
        }
    }
}
