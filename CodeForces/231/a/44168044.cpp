#include<stdio.h>
int main()
{
    long long int a,b,c,d,e=0;
    int i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld%lld%lld",&b,&c,&d);
        if(b+c+d>=2)
        {
            e++;
        }
    }
    printf("%lld\n",e);
    return 0;
}
