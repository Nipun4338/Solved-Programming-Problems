#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if(a>=b && (a-c-b)>=d)
    {
        printf("1\n");
    }
    else
        printf("-1\n");
    return 0;
}
