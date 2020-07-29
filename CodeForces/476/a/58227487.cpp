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
    ll a,b,c=0,d=0,e=0;
    cin>>a>>b;
    if(a<b)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        c=a/b;
        d=(c+1)/2;
        e=b*d;
        if(e*2<a)
        {
            cout<<e+b<<endl;
            return 0;
        }
        cout<<e<<endl;
    }
}

