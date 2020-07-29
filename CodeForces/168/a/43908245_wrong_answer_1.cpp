#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,e;
    scanf("%d%d%d",&a,&b,&c);
    d=(a/100.0);
    d=d*c;
    e=d-b;
    if(e>0.1){
        e=ceil(e);
    printf("%.0f\n",e);
    }
    else if(e<0)
    {
        e=e*(-1);
    printf("%.0f\n",e);
    }
    else if(e==0)
    {
    printf("%.0f\n",e);
    }
    return 0;
}
