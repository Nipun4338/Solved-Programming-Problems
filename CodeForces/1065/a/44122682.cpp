#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f=0,g=0;
    int i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld%lld%lld%lld",&b,&c,&d,&e);
        f=b/e;
        g=f/c;
        g=g*d;
        printf("%lld\n",g+f);
        f=0;
        g=0;
    }
    return 0;
}
