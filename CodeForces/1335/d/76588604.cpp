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
        char x[9][9];
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cin>>x[i][j];
            }
        }
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(i==0 && j==6)
                {
                    x[i][j]=x[i][j-1];
                }
                if(i==1 && j==1)
                {
                    x[i][j]=x[i][j-1];
                }
                if(i==2 && j==5)
                {
                    x[i][j]=x[i][8];
                }
                if(i==3 && j==8)
                {
                    x[i][j]=x[i][5];
                }
                if(i==4 && j==2)
                {
                    x[i][j]=x[i][0];
                }
                if(i==5 && j==4)
                {
                    x[i][j]=x[i][7];
                }
                if(i==6 && j==7)
                {
                    x[i][j]=x[i][6];
                }
                if(i==7 && j==0)
                {
                    x[i][j]=x[i][1];
                }
                if(i==8 && j==3)
                {
                    x[i][j]=x[i][2];
                }
            }
        }
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                cout<<x[i][j];
            }
            cout<<endl;
        }
    }
}
