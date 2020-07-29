/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,c,d;
    cin>>a;
    if(a%3<=1)
    {
        b=1;
        c=1;
        d=a-(b+c);
    }
    else if(a%3==2)
    {
        b=1;
        c=2;
        d=a-(b+c);
    }
    cout<<b<<" "<<c<<" "<<d<<endl;
}
