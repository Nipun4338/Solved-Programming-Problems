#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5][5],i,j,k=0,l=0,m=0,n=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]!=0)
            {
                k=i;
                l=j;
            }
        }
    }
    m=abs(2-k);
    n=abs(2-l);
    printf("%d\n",m+n);
    return 0;
}
