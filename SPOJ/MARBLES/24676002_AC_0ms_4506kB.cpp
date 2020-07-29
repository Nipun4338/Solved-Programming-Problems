
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll nCr(int n, int r)
{

    ll p=1,k=1;
    if (n-r<r)
    {
        r=n-r;
    }
    if(r!=0)
    {
        while(r)
        {
            p*=n;
            k*=r;
            ll m=__gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
    {
        p=1;
    }
    return p;
}

int main()
{
    long double x,a,b;
    cin>>x;
    while(x--)
    {
        cin>>a>>b;
        //long double x1=(b/a);
        //ll temp=x1*nCr(a,b);
        //ll temp=x1*nCr(a,b);
        cout<<nCr(a-1,b-1)<<endl;
    }

    //for(int i=0)
}
