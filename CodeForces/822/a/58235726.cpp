/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum=1;

ll Gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return Gcd(b,a%b);
}

ll fact(ll a)
{
    if(a==1)
    {
        return 1;
    }
    return a*fact(a-1);
}

int main()
{
    ll a,b,c,d;
    cin>>a>>b;
    cout<<fact(min(a,b))<<endl;
}




