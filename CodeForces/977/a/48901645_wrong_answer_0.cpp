#include<stdio.h>

int main()
{
    int a,b,i,c=0,j=0;
    scanf("%d%d",&a,&b);
    c=a;
    while(j<=b)
    {
        if(c%10!=0)
        {
            c=c-1;
            j++;
            printf("%d %d\n",c,j);
        }
        else if(c%10==0)
        {
            c=c/10;
            j++;
            printf("%d\n",c);
        }
        if(j==b || c==1)
        {
            break;
        }
    }
    printf("%d\n",c);
    return 0;
}
