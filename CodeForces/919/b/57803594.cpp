/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c,d,e,f,a1=0,b1=0,a2=0,b2=0;

ll div(ll ans)
{
    ll ans1=0;
    while(ans)
    {
        ans1+=ans%10;
        ans=ans/10;
    }
    return ans1;
}

int main()
{
    cin>>a;
    ll ans=0;
    while(a)
    {
        ans++;
        if(div(ans)==10)
        {
            a--;
        }
    }
    cout<<ans<<endl;
}
