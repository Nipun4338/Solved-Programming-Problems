#include<stdio.h>
int main()
{
    int a,count=0,i,j;
    scanf("%d",&a);
    for(i=2; i<=a; i+=2)
    {
        count++;
    }
    printf("%d\n",3*count);
    return 0;
}
