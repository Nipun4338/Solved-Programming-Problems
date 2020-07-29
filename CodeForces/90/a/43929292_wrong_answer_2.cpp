#include<stdio.h>
int main()
{
    int a,b,c,count=0,x=0,y=0,m=0,n=0,o=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=2)
    {
        o++;
    }
    if(b<=2)
    {
        m++;
    }
    if(c<=2)
    {
        n++;
    }
    if(a>2)
    {
        count++;
    }
    if(b>2)
    {
        x+=2;
    }
    if(c>2)
    {
        y+=3;
    }
    printf("%d\n",30+count+x+y+m+n+o);
    return 0;
}
