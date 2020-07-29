#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll v[1005][1005],v1[10000];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            cin>>v[i][j];
        }
    }
    int l=1;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            if(i==2 && j==0)
            {
                v1[0]=(v[0][1]/v1[1]);
            }
            if(v[i][j]==0 && ((i!=0 && j!=0) && (i!=a-1 && j!=a-1)))
            {
                v1[l]=(__gcd(v[i][j-1],v[i][j+1]));
                l++;
            }
        }
    }
    v1[l]=(v[a-1][a-2]/v1[l-1]);
    for(int i=0; i<=l; i++)
    {
        cout<<v1[i];
        if(i!=l)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
