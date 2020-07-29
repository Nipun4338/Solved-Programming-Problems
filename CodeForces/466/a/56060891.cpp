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
        sum=(n/m)*b+min((n%m)*a,b);
    }
    cout<<sum<<endl;
    return 0;
}
