#include<stdio.h>
int main()
{
    long long int a,b,c,e=0,d=0;
    int i;
    scanf("%lld%lld%lld",&a,&b,&c);
    for(i=1; i<=c; i++)
    {
        d=a*i;
        e=e+d;
    }
    printf("%lld\n",e-b);
    return 0;
}
