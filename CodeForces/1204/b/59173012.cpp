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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll>v;
    for(int i=0; i<=20; i++)
    {
        v.push_back(pow(2,i));
    }
    ll a,b,c,sum=0,sum1=0;
    cin>>a>>b>>c;
    //ll d=a-b;
    for(int i=0; i<b; i++)
    {
        sum=sum+v[i];
    }
    sum=sum+(1*(a-b));
    ll e=c;
    for(int i=0; i<c; i++)
    {
        sum1=sum1+v[i];
    }
    sum1=sum1+(v[c-1]*(a-c));
    cout<<sum<<" "<<sum1<<endl;
}
