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
    ll a,b,c;
    cin>>a>>b>>c;
    ll d,e,f=0,sum=0,sum1=0;
    if(a==0)
    {
        sum1=b/c;
        cout<<sum1<<endl;
        return 0;
    }
    for(int i=0; i<a; i++)
    {
        cin>>d>>e;
        sum=d-f;
        sum1=sum1+(sum/c);
        f=d+e;
    }
    sum=b-(d+e);
    sum1=sum1+(sum/c);
    cout<<sum1<<endl;
}

