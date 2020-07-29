#include<stdio.h>
int main()
{
    int a,b,c,x=0,y=0,z=0;
    scanf("%d%d%d",&a,&b,&c);
    x=(3*((a+1)/2)+27);
    y=(3*((b+1)/2)+28);
    z=(3*((c+1)/2)+29);
    if(x>y && x>z)
    {
    printf("%d\n",x);
    }
    else if(y>x && y>z)
    {
          printf("%d\n",y); 
    }
    else
            printf("%d\n",z);
    return 0;
}
