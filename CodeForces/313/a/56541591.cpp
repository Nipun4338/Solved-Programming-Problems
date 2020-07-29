/*
ID: Nipun Paul
LANG: C++
PROB: God knows
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b=0,c=0,d=0;
    cin>>a;
    b=a/10;
    c=(a%100)/10;
    d=(a/10)-c+(a%10);
    if(b>=d && a<0)
    {
        cout<<b<<endl;
    }
    else if(b<d && a<0)
    {
        cout<<d<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
    return 0;
}
