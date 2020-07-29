#include<stdio.h>
int main()
{
    long long int a,b,c[100],d=0;
    int i;
    scanf("%lld%lld",&a,&b);
    for(i=1; i<=a; i++)
    {
        scanf("%lld",&c[i]);
    }
    for(i=1; i<=a; i++)
    {
        if(c[i]>=c[b] && c[i]!=0)
        {
            d++;
        }
    }
    printf("%lld\n",d);
    return 0;
}
