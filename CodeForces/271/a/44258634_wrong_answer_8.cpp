#include<stdio.h>
int main()
{
    long long int a,b,c,d,e;
    int i;
    while(scanf("%lld",&a)!=EOF)
    {
        if(a!=9000)
        {
        for(i=a+1; i<9000; i++)
        {
            b=i/1000;
            c=(i%1000)/100;
            d=((i%1000)%100)/10;
            e=(((i%1000)%100)%10);
            if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
            {
                break;
            }
        }
        printf("%lld%lld%lld%lld\n",b,c,d,e);
        }
        else if(a==9000)
        {
            printf("9012\n");
        }
    }
    return 0;
}
