#include<stdio.h>
int main()
{
    int a,b,c,d,e,i;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=a+1; i<=9000; i++)
        {
            b=i/1000;
            c=(i%1000)/100;
            d=((i%1000)%100)/10;
            e=(((i%1000)%100)%10);
            if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
            {
                break;
            }
        }
        printf("%d%d%d%d\n",b,c,d,e);
    }
    return 0;
}
