#include<stdio.h>

int main()
{
    int a,b,i,d=0,c=0,x;
    scanf("%d",&x);
    for(i=0; i<x; i++){
    scanf("%d",&a);
    b=a;
    c=0;
    do
    {
        d=b%2;
        b=b/2;
        if(d==1)
        {
            c++;
        }
    }while(b!=0);
    if(c%2==0)
    {printf("Case %d: even\n",i+1);}

    else if(c%2==1)
        printf("Case %d: odd\n",i+1);}
    return 0;
}
