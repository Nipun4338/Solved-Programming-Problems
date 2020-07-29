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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a+b+c+d==0)
        {
            break;
        }
        ll sum=0,b1=0,c1=0,d1=0;
        if(a>=b)
        {
            a=40+(b+1)-(a+1);
            b1=0;
        }
        else
        {
            b1=b;
        }
        if(b<=c)
        {
            b=(b+1)+40-(c+1);
            c1=0;
        }
        else
        {
            c1=c;
        }
        if(c>=d)
        {
            c=40+(d+1)-(c+1);
            d1=0;
        }
        else
        {
            d1=d;
        }
        sum=(360*3)+((40-abs(a-b1))*9)+((40-abs(b-c1))*9)+((40-abs(c-d1))*9);
        cout<<sum<<endl;
    }
    return 0;
}