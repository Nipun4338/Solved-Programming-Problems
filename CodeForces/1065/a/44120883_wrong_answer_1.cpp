#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f=0;
    int i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld%lld%lld%lld",&b,&c,&d,&e);
        f=b/c;
        f=f*d;
        printf("%lld\n",b+f);
        f=0;
    }
    return 0;
}
