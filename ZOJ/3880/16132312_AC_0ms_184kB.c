#include<stdio.h>
int main()
{
    int a,i,b,c,m=0,j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        for(j=0; j<b; j++)
        {
            scanf("%d",&c);
            {
                if(c>6000 && c<=9999)
                {
                    m++;
                }
            }
        }
printf("%d\n",m);
            m=0;
    }
    return 0;

}
