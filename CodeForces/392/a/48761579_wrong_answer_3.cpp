#include<stdio.h>
#include<math.h>

int main()
{
    int a,b=0,i;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        b=pow(2,i+1);
    }
    printf("%d\n",b);
    return 0;
}
