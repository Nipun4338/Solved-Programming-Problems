#include<stdio.h>

int main()
{
    long long int a,sum=0;
    int i;
    scanf("%lld",&a);
    for(i=1; i<=a; i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum+(i*-1);
        }
    }
    printf("%lld\n",sum);
    return 0;
}
