#include<stdio.h>
int main()
{
    int a,i,b,c;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d",&b,&c);
        if(b>c)
        {
            printf("%d\n",b*2+c);
        }
        else if(b<c)
        {
            printf("%d\n",c*2+b);
        }
        else if(b==c)
        {
            printf("%d\n",b*3);
        }
    }
    return 0;
}
