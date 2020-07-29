#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d=0,e=0,f=0,x=0,g=0;
    while(cin>>a>>b>>c){
    d=(a+b+c)/2.0;
    x=sqrt(d*(d-a)*(d-b)*(d-c));
    e=M_PI*pow((x/d),2);
    f=x-e;
    g=(M_PI*pow((a*b*c)/(4*x),2))-x;
    printf("%.4lf %.4lf %.4lf\n",g,f,e);
    d=0;
    e=0;
    f=0;
    g=0;
    x=0;
    }
    return 0;
}