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

    ll a,b,c;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        if(b%2!=0 && c%2!=0)
        {
            for(int i=0; i<b; i++)
            {
                for(int j=0; j<c; j++)
                {
                    if((i+1)%2!=0)
                    {
                        if((j+1)%2!=0)
                        {
                            cout<<"B";
                        }
                        else
                        {
                            cout<<"W";
                        }
                    }
                    else
                    {
                        if((j+1)%2!=0)
                        {
                            cout<<"W";
                        }
                        else
                        {
                            cout<<"B";
                        }
                    }
                }
                cout<<endl;
            }
        }
        else if(b%2==0 && c%2==0)
        {
            for(int i=0; i<b; i++)
            {
                for(int j=0; j<c; j++)
                {
                    if(!(i==0 && j==1))
                    {
                        if((j+1)%2!=0)
                        {
                            cout<<"B";
                        }
                        else
                        {
                            cout<<"W";
                        }
                    }
                    else
                    {
                        cout<<"B";
                    }
                }
                cout<<endl;
            }
        }
        else
        {
            //if(b%2==0)
            {
                for(int i=0; i<b; i++)
                {
                    for(int j=0; j<c; j++)
                    {
                        if(!(i==b-1 && j==c-1))
                        {
                            if((i+1)%2!=0)
                            {
                                if((j+1)%2!=0)
                                {
                                    cout<<"B";
                                }
                                else
                                {
                                    cout<<"W";
                                }
                            }
                            else
                            {
                                if((j+1)%2!=0)
                                {
                                    cout<<"W";
                                }
                                else
                                {
                                    cout<<"B";
                                }
                            }
                        }
                        else
                        {
                            cout<<"B";
                        }
                    }
                    cout<<endl;
                }
            }
        }
    }
}


