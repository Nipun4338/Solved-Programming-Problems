#include<stdio.h>

int main()
{
    int a,b,c,d=0,e=0,f=0,h=0;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    h=a*b*c;
    e=a*(b+c);
    f=(a+b)*c;
    if(d>=f && d>=h && d>=e)
    {
        printf("%d\n",d);
    }
    else if(e>=f && e>=h && e>=d)
    {
        printf("%d\n",e);
    }
    else if(f>=d && f>=h && f>=e)
    {
        printf("%d\n",f);
    }
    else
        printf("%d\n",h);
    return 0;

}
