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
    ll a,b=0;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        for(int i=1; i<a; i++)
        {
            for(int j=i+1; j<=a; j++)
            {
                b=b+Gcd(i,j);
            }
        }
        cout<<b<<endl;
        b=0;
    }
}
