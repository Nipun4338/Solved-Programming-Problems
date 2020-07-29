#include<stdio.h>
int main()
{
    long long int a,b,c,d[500][500],m=0,k=0;
    int i,j;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0; i<a; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&d[i][j]);
            m=m+d[i][1];
            k=k+d[i][i]+d[i][2];
        }
    }
    if(k-1<=b){
    printf("%d\n",(b-m)/c);}
    return 0;
}
