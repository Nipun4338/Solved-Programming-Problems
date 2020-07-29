#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;

const int M = (int)(2e6 + 239);

int main()
{
    FAST;

    ll a,c,d;
    double b;
    cin>>a;
    while(a--)
    {
        cin>>b>>c>>d;
        ll flag=0;
        while(true)
        {
            //cout<<b<<endl;
            if(b<=0)
            {
                flag=1;
                break;
            }
            if(b<=20 && d!=0)
            {
                b-=10;
                d--;
            }
            else if(c!=0)
            {
                b/=2.0;
                b=floor(b);
                b+=10;
                c--;
            }
            else if(d!=0)
            {
                b-=10;
                d--;
            }
            if(b<=0)
            {
                flag=1;
                break;
            }
            if((c==0 && d==0))
            {
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
