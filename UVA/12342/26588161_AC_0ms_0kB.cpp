#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d;
    double c;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(b>180000.0 && b<=480000.0)
        {
            c=((b-180000.0)*0.1);
        }
        else if(b>480000.0 && b<=880000.0)
        {
            c=30000.0+((b-480000.0)*0.15);
        }
        else if(b>880000.0 && b<=1180000.0)
        {
            c=30000.0+(400000.0*.15)+((b-880000.0)*.20);
        }
        else if(b>1180000.0)
        {
            c=30000.0+(400000*.15)+(300000*.20)+((b-1180000.0)*.25);
        }
        else if(b<=180000.0)
        {
            c=0.0;
        }
        if(c>0.0 && c<2000.0)
        {
            c=2000;
        }
        d=(long int)c;
        if(abs(c-d)>0.0)
        {
            d+=1;
        }
        printf("Case %d: %d\n",i+1,d);
        c=0;
        d=0;
    }
    return 0;
}