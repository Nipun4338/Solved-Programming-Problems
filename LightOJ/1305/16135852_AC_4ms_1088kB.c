#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2,b1,b2,c1,c2,d1=0,d2=0,x,i;
    long long int area=0;
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
    scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
    d1=a1+c1-b1;
    d2=a2+c2-b2;
    area=a1*b2+b1*c2+c1*d2+d1*a2-(a2*b1+b2*c1+c2*d1+d2*a1);
    if(area<0)
    {
        area=area*(-1);
    }
    printf("Case %d: %d %d %lld\n",i+1,d1,d2,area/2);
    area=0;
    d1=0;
    d2=0;
    }
    return 0;
}
