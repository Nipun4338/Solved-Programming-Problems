#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return Gcd(b,a%b);
}

/*int Lcm(int a, int b)
{
    return ((a/Gcd(a,b))*b);
}*/

int main()
{
    ll a,b,c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b>>c;
        if(b>c)
        {
            cout<<"-1"<<endl;
        }
        else if(c%b!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<b<<" "<<c<<endl;
        }
    }
}
