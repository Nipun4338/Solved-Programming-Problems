#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll v[1005][1005],v1[10000];
vector<ll>v2;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,f;
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
                if(v[0][1]!=0 && v1[1]!=0)
                {
                    v1[0]=(v[0][1]/v1[1]);
                }
                else
                {
                    v1[0]=0;
                }
            }
            if(v[i][j]==0 && ((i!=0 && j!=0) && (i!=a-1 && j!=a-1)))
            {
                if(v[i][j-1]!=0 && v[i][j+1]!=0)
                {
                    if(__gcd(v[i][j-1],v[i][j+1])!=0)
                    {
                        v1[l]=(__gcd(v[i][j-1],v[i][j+1]));
                        l++;
                    }
                    else
                    {
                        v1[l]=0;
                        l++;
                    }
                }
                else
                {
                    v1[l]=0;
                    l++;
                    v2.push_back(j);
                }
            }
        }
    }
    //cout<<v2.size()<<endl;
    if(v[a-1][a-2]!=0 && v1[l-1]!=0)
    {
        v1[l]=(v[a-1][a-2]/v1[l-1]);
    }
    else
    {
        v1[l]=0;
    }
    for(int i=0; i<v2.size(); i++)
    {
        vector<ll>v3;
        for(int j=0; j<a; j++)
        {
            if(v[j][v2[i]]!=0)
            {
                v3.push_back(v[j][v2[i]]);
            }
        }
        if(v3.size()<2)
        {
            v1[v2[i]]=0;
        }
        else
        {
            for(int j=0; j<v3.size()-1; j++)
            {
                f=__gcd(v3[j],v3[j+1]);
            }
            v1[v2[i]]=f;
        }
    }
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
