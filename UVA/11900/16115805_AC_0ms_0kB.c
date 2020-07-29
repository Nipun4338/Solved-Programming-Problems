#include<stdio.h>
int main()
{
    int a,i,e[30],j,x=0,c,d,b,y=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d%d",&b,&c,&d);
        for(j=0; j<b; j++)
        {
            scanf("%d",&e[j]);
        }
        x=0;
        for(j=0,y=0;j<b;j++)
            {
            if(x+1<=c && y+e[j]<=d)
                {
                x++;
                y=y+e[j];
                }
        else
            {break;}
    }
    printf("Case %d: %d\n",i+1,x);}
    return 0;
}
