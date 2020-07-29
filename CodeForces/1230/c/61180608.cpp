#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool e[10][10];

int main()
{
    ll a,b,c,c1=INT_MAX,d;
    cin>>a>>b;
    for(int i=0; i<b; i++)
    {
        cin>>c>>d;
        e[c][d]=1;
        e[d][c]=1;
    }
    if(a<=6)
    {
        cout<<b<<endl;
        return 0;
    }
    for(int i=1; i<7; i++)
    {
        for(int j=i+1; j<=7; j++)
        {
            ll f=0;
            for(int k=1; k<=7; k++)
            {
                if(e[i][k] && e[j][k])
                {
                    f++;
                }
                //cout<<k<<" "<<f<<" HI"<<endl;
            }
            c1=min(c1,f);
        }
    }
    cout<<b-c1<<endl;
}
