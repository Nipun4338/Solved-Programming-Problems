#include<stdio.h>
int main()
{
    long long int a,b,c,d[500][500],m=0;
    int i,j;
    scanf("%lld%lld%lld",&a,&b,&c);
    for(i=0; i<a; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%lld",&d[i][j]);
            m=m+d[i][1];
        }
    }
    printf("%d\n",(b-m)/c);
    return 0;
}
