/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c,d,e,f,a1=0,b1=0,a2=0,b2=0;

int main()
{
    cin>>a;
    c=a;
    if(c>9)
    {
        while(c>0)
        {
            f=c%10;
            c=c/10;
        }
    }
    else
    {
        f=a;
    }
    //cout<<f<<endl;
    b=a*10+(10-f);
    cout<<b<<endl;
}
