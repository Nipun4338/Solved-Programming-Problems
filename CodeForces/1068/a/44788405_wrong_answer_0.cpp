#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if(a>=b && (c-b)>=d)
    {
        printf("%lld\n",a/(b-c));
    }
    else
        printf("-1\n");
    return 0;
}
