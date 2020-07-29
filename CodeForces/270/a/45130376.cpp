#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        if(360%(180-b)==0)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
