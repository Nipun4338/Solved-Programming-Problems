#include<stdio.h>
int main()
{
    long long int a,b,c,d=0;
    int i;
    scanf("%lld%lld",&a,&b);
    for(i=0; i<a; i++)
    {
        scanf("%lld",&c);
        if(c>b)
        {
            d++;
        }
    }
    printf("%lld\n",d);
    return 0;
}
