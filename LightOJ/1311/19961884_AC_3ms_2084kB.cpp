#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,d,e,x,y,z,x1,x2,f;
    int c;
    cin>>c;
    for(int i=0; i<c; i++)
    {
    cin>>a>>b>>f>>d>>e;
    x=a/d;
    y=b/e;
    z=x;
    if(y>x)
    {
        z=y;
    }
    x1=(a*a)/(2*d);
    x2=(b*b)/(2*e);
    z=z*f;
    cout<<"Case "<<i+1<<": ";
    printf("%f %f\n",x1+x2,z);
    x=0;
    y=0;
    z=0;
    x1=0;
    x2=0;
    }
    return 0;
}
