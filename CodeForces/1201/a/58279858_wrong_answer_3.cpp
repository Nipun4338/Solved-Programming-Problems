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
    ll e[1000];
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
        for(int j=0; j<a-1; j++)
        {
            if(d[j][i]==d[j+1][i])
            {
                sum++;
            }
        }
        //cout<<sum<<endl;
        if(sum==0)
        {
            sum1=sum1+e[l];
        }
        else
        {
            sum1=sum1+((sum+1)*(e[l]));
        }
        l++;
        sum=0;
    }
    cout<<sum1<<endl;
}
