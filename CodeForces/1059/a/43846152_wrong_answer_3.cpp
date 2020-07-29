#include<stdio.h>
int main()
{
    int a,b,c,d[100][100],i,j,m=0;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0; i<a; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&d[i][j]);
            m=m+d[i][1];
        }
    }
    printf("%d\n",(b-m)/c);
    return 0;
}
