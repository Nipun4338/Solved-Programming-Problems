#include<bits/stdc++.h>

int main()
{
    long long int a,b,sum=0;
    int i;
    scanf("%lld%lld",&a,&b);
    if(a%2==0)
    {
        if(b<=a/2)
        {
            sum=1;
            for(i=1; i<b; i++)
            {
                sum=sum+2;
            }
        }
        else if(b>a/2 && b<=a)
        {
            sum=2;
            for(i=1; i<b-(a/2); i++)
            {
                sum=sum+2;
            }
        }
    }
    else if(a%2==1)
    {
        if(b<=(a+1)/2)
        {
            sum=1;
            for(i=1; i<b; i++)
            {
                sum=sum+2;
            }
        }
        else if(b>(a+1)/2 && b<=a)
        {
            sum=2;
            for(i=1; i<(b-((a+1)/2)); i++)
            {
                sum=sum+2;
            }
        }
    }
    printf("%d\n",sum);
}
