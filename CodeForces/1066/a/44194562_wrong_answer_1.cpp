#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f=0,g=0,h=0;
    int i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld%lld%lld%lld",&b,&c,&d,&e);
        f=b/c;
        g=e-d+1;
        h=g/c;
        if(b==g)
        {
            printf("0\n");
        }
        else if(c==d)
        {
            printf("%lld\n",f-h-1);
        }
        else
        {
        printf("%lld\n",f-h);}
        f=0;
        g=0;
        h=0;
    }
    return 0;
}
