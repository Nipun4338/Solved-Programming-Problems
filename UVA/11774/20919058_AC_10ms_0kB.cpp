/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

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
    ll a,b,c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        if(Gcd(b,c)==1)
        {
            //cout<<Gcd(b,c)<<endl;
            cout<<"Case "<<i+1<<": "<<b+c<<endl;
        }
        else if(b==c)
        {
            cout<<"Case "<<i+1<<": "<<"2"<<endl;
        }
        else
        {
            ll temp=Gcd(b,c);
            cout<<"Case "<<i+1<<": "<<(b/temp)+(c/temp)<<endl;
        }
    }

}
