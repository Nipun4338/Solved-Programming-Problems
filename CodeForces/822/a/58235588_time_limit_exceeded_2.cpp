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

ll fact(ll a1)
{
    sum=1;
    while(a1!=0)
    {
        sum=sum*a1;
        //cout<<a1<<endl;
        a1--;
    }
    return sum;
}

int main()
{
    ll a,b,c,d;
    cin>>a>>b;
    c=fact(a);
    d=fact(b);
    cout<<Gcd(c,d)<<endl;
}




