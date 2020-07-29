#include<stdio.h>
int main()
{
    int a,b,i,m=0,j,k;
    scanf("%d",&a);
    for(i=0,j=2; i<10000,j<=a; i++,j+=2)
    {
        if(j%2==0)
        {
            for(k=1; k<=a; k+=2)
            {
                m++;
            }
        }
    }
    printf("%d\n",m);
}
