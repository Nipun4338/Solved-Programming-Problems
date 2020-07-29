#include<stdio.h>
int main()
{
    int a,i,c[100],j,e;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&c[i]);
    }for(i=0; i<a; i++){
        if(c[i]>=c[i+1])
        {

            e=c[i];
            c[i]=c[i+1];
            c[i+1]=e;}
    }
    printf("%d\n",c[1]);
    return 0;
}
