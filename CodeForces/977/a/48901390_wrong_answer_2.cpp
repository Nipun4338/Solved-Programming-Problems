#include<stdio.h>

int main()
{
    int a,b,i,c=0,j=1;
    scanf("%d%d",&a,&b);
    c=a;
    while(j<=b)
    {
        if(c%10!=0)
        {
            c=c-1;
            j++;
        }
        else if(c%10==0)
        {
            c=c/10;
        }
        if(j==b || c==1)
        {
            break;
        }
    }
    printf("%d\n",c);
    return 0;
}
