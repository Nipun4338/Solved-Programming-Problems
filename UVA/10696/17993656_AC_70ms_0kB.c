#include<stdio.h>

int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        b=a;
        if(a==0)
        {
            break;
        }
        if(a<=100)
        {
            a=91;
        }
        if(a>=101)
        {
            a=a-10;
        }
        printf("f91(%d) = %d\n",b,a);
    }
    return 0;
}
