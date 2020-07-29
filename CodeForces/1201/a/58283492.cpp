/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,sum1=0,sum=0,l=0;
    string c;
    char d[1000][1000];
    char g[5];
    ll h[5];
    ll e[1000];
    char f='A';
    for(int i=0; i<5; i++)
    {
        g[i]=f;
        f++;
    }
    cin>>a>>b;
    getchar();
    for(int i=0; i<a; i++)
    {
        cin>>d[i];
    }
    for(int i=0; i<b; i++)
    {
        cin>>e[i];
    }
    for(int i=0; i<b; i++)
    {
        memset(h,0,sizeof(h));
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<5; k++)
            {
                if(d[j][i]==g[k])
                {
                    h[k]++;
                }
            }
        }
        sort(h,h+5);
        sum=sum+(h[4]*e[l]);
        l++;
    }
    cout<<sum<<endl;
}
