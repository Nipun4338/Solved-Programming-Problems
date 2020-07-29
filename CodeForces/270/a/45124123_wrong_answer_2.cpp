#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        if(b<60)
        {
            printf("NO\n");
        }
        else if(b>=60 && b<180)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
