#include<stdio.h>
int main()
{
    int a,i,c[100],e,d[100],j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&c[i]);
    }for(i=0,j=i+1; i<a,j<a; i++,j++){
        if(c[i]>=d[j])
        {

            e=c[i];
            c[i]=c[i+1];
            d[j]=e;}
    }
    printf("%d\n",d[1]);
    return 0;
}
