#include<stdio.h>
int main()
{
    int a,b[100],i,m=0,n=0,c,d;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<a; i++)
    {
        if(b[i]%2==0)
        {
            n++;
            c=i;
        }
        if(b[i]%2!=0)
        {
            m++;
            d=i;
        }
    }
    if(n>m){
        printf("%d\n",d+1);
    }
    else
        printf("%d\n",c+1);
        return 0;
}
