#include<stdio.h>

int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
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
    printf("%d\n",sum);
    return 0;
}