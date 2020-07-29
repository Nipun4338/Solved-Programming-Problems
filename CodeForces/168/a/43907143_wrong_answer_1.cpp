#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d;
    scanf("%d%d%d",&a,&b,&c);
    d=(a/100.0);
    d=d*c;
    d=d-b;
    if(d<=-1)
    {
        d=d*(-1);
    }
    d=ceil(d);
    printf("%.0f\n",d);
    return 0;
}
