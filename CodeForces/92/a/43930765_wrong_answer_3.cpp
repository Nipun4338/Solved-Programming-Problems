#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    c=((a+b)%5);
    if(c>=2)
    {
        c=c/2;
    }
    printf("%d\n",c);
    return 0;
}
