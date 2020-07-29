/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,c=0,sum=0,d=0,e=0;
    cin>>n>>m>>a>>b;
    c=m*a;
    if(c<=b)
    {
        sum=n*a;
    }
    else
    {
        d=n/m;
        e=n%m;
        if(n/m==0)
        {
            if(n*a<b)
            {
                sum=n*a;
            }
            else
            {
                sum=b;
            }
        }
        else
        {
            sum=((n/m)*b)+((n%m)*min(a,b));
        }
    }
    cout<<sum<<endl;
    return 0;
}
