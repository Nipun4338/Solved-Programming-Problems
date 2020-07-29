#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double d=0,e=0,f=0,g=0,h=0;
    char c;
    while(cin>>a>>c>>b)
    {
    if(a+b==0)
    {
        break;
    }
    d=(b*100.0)/60.0;
    e=(d*5.0)/100.0;
    f=(a*5)+e;
    g=b-f;
    h=g*6;
    if(h<0)
    {
        h=360+h;
    }
    if(h>180)
    {
        h=360-h;
    }
    printf("%0.3f\n",h);
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    }
    return 0;
}