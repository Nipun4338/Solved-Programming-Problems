#include<stdio.h>
int main()
{
    int a,b[100],i,count=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
        if(b[i]==8)
        {
            count++;
        }
    }
    if(count>=1 && (a/11)<count)
    {
        printf("%d\n",count/(a/11));
    }
    else if(count>=1 && (a/11)>count)
    {
        printf("%d\n",(a/11)/count);
    }
    else if(count>=1 && (a/11)==count)
    {printf("%d\n",count);}
    else
        printf("0\n");
    return 0;
}