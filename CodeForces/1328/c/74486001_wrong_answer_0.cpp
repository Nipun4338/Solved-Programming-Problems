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
int c;
set<ll>s;
map<ll,ll>m,m1;


const int M = (int)(2e6 + 239);

// Driver code

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
        string x;
        cin>>b;
        cin>>x;
        string x1="1";
        vector<char>v;
        bool flag=false, flag1=false;
        for(int i=0; i<b; i++)
        {
            if(x[i]=='0')
            {
                flag=true;
            }
            if(x[i]=='1')
            {
                flag1=true;
            }
        }
        if(!flag && flag1)
        {
            flag=false;
            flag1=false;
            int temp;
            for(int i=0; i<b; i++)
            {
                if(x[i]=='1')
                {
                    flag=true;
                }
                if(flag && x[i]=='2')
                {
                    flag1=true;
                    temp=i;
                    break;
                }
            }

            for(int i=0; i<temp; i++)
            {
                cout<<"1";
            }
            for(int i=0; i<b-temp; i++)
            {
                cout<<"0";
            }
            cout<<endl;
            cout<<'1';
            for(int i=1; i<temp; i++)
            {
                cout<<"0";
            }
            for(int i=0; i<b-temp; i++)
            {
                cout<<x[i];
            }
            cout<<endl;
        }
        else
        {
            if(x[b-1]=='1')
            {
                for(int i=0; i<b; i++)
                {
                    if(x[i]=='2')
                    {
                        cout<<'1';
                    }
                    else if(x[i]=='1')
                    {
                        cout<<'1';
                    }
                    else
                    {
                        cout<<'0';
                    }
                }
                cout<<endl;
                for(int i=0; i<b-1; i++)
                {
                    if(x[i]=='2')
                    {
                        cout<<'1';
                    }
                    else if(x[i]=='1')
                    {
                        cout<<'1';
                    }
                    else
                    {
                        cout<<'0';
                    }
                }
                cout<<'0'<<endl;
            }
            else
            {
                for(int i=0; i<b; i++)
                {
                    if(x[i]=='2')
                    {
                        cout<<'1';
                    }
                    else if(x[i]=='1')
                    {
                        cout<<'1';
                    }
                    else
                    {
                        cout<<'0';
                    }
                }
                cout<<endl;
                for(int i=0; i<b; i++)
                {
                    if(x[i]=='2')
                    {
                        cout<<'1';
                    }
                    else if(x[i]=='1')
                    {
                        cout<<'1';
                    }
                    else
                    {
                        cout<<'0';
                    }
                }
                cout<<endl;
            }
        }
    }

}
