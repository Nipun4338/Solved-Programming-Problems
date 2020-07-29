#include<stdio.h>
int main()
{
    int a,i,c[100],e,5
1 2 3 1 1j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&c[i]);
    }for(i=0,j=i+1; i<a,j<a; i++,j++){
        if(c[i]>c[j])
        {

            e=c[i];
            c[i]=c[j];
            c[j]=e;}
    }
    printf("%d\n",c[1]);
    return 0;
}
