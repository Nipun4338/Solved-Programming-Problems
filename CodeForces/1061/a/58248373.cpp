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
    ll a,b,c=0,sum=0,sum1=0,d=0;
    set<ll>s;
    cin>>a>>b;
    c=b;
    while(a!=0)
    {
        sum=sum+(b/a);
        d=b/a;
        b=b-(a*d);
        sum1=sum1+(a*d);
        if(sum1!=c)
        {
            a--;
        }
        else
        {
            break;
        }
    }
    cout<<sum<<endl;
}
