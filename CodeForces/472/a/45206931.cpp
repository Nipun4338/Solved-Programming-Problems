#include<stdio.h>
int main()
{
    int a,i,b=0,c=0,d=0;
    scanf("%d",&a);
    for(i=4; i<a; i++)
    {
        b=a-i;
        if((i%2==0 || i%3==0) && (b%2==0 || b%3==0) && b!=2 && b!=3)
        {
            c=i;
            d=b;
        }
    }
    printf("%d %d\n",c,d);
    return 0;
}
