#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,h=0,f=0,g=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c;
        if(c%2==0)
        {
            h++;
        }
        else
        {
            e++;
        }
    }
    for(int j=0; j<b; j++)
    {
        cin>>d;
        if(d%2==0)
        {
            f++;
        }
        else
        {
            g++;
        }
    }
    if(e>=f)
    {
        e=f;
    }
    if(e<f)
    {
        e=e;
    }
    if(h>=g)
    {
        h=g;
    }
    if(h<g)
    {
        h=h;
    }
    cout<<e+h<<endl;
    return 0;
}