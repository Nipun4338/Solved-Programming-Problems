#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return Gcd(b,a%b);
}

ll Lcm(ll a, ll b)
{
    return ((a/Gcd(a,b))*b);
}


int main()
{
    ll a,b,c,d;

    cin>>a;
    while(a--)
    {
        cin>>b;
        ll temp,temp1;
        cout<<b-1<<" "<<1<<endl;
    }
}
