#include<stdio.h>

int main()
{
    int a,b,i,c,d=0,k=0,j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d",&b,&c);
        if(b<=c){
        d=((c-0)*4)+(3*3)+5*2;
        printf("Case %d: %d\n",i+1,d);
        d=0;
        }
        else if(b>c)
        {
            for(j=c; j<b; j++)
            {
                k++;
            }
            d=((k+b)*4)+(3*3)+5*2;
        printf("Case %d: %d\n",i+1,d);
        d=0;
        k=0;
        }
    }
    return 0;
}
