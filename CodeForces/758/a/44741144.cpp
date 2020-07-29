#include<stdio.h>
int main()
{
    int a,i,b[100],c,d=0,e=0;
    scanf("%d",&a);
    for(i=0,c=0; i<a; i++)
    {
        scanf("%d",&b[i]);
        if(b[i]>c)
        {
            c=b[i];
        }
    }
    for(i=0; i<a; i++)
    {
        d=c-b[i];
        e=e+d;
    }
    printf("%d\n",e);
    return 0;
}
