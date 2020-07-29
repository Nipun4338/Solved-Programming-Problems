#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,e=0;
    scanf("%d",&a);
    b=a/1000;
    c=(a%1000)/100;
    d=((a%1000)%100)/10;
    e=(((a%1000)%100)%10);
    if(a%4==0 || a%7==0)
    {
        printf("YES\n");
    }
    else if((b==4 || b==7) && (c==4 || c==7) && (d==4 || d==7) && (e==4 || e==7))
        {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
