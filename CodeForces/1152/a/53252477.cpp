#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c[100010],d[100010],e=0,h=0,f=0,g=0;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>c[i];
        if(c[i]%2==0)
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
        cin>>d[j];
        if(d[j]%2==0)
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
