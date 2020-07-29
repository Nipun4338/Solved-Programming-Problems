/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,c=0,sum=0;
    cin>>n>>m>>a>>b;
    c=m*a;
    if(c<=b)
    {
        sum=n*a;
    }
    else
    {
        if(n%m==0)
        {
            sum=(n/m)*b;
        }
        else
        {
            sum=((n/m)+1)*b;
        }
    }
    cout<<sum<<endl;
    return 0;
}
