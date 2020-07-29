#include<stdio.h>
int main()
{
    int a,b,x=0,y=6,z;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        while(a<=6)
        {
            a++;
            x++;}
        if(y%x==0){
                z=y/x;
        printf("1/%d\n",z);}
        else if(y%x!=0)
            {
                printf("%d/%d\n",x/2,y/2);
            }
        }
    else if(b>a)
    {
        while(b<=6)
        {
            b++;
            x++;
        }
        if(y%x==0){
                z=y/x;
        printf("1/%d\n",z);}
        else if(y%x!=0)
            {
                printf("%d/%d\n",x/2,y/2);
            }
    }
    else if(a==b && a)
    {
        while(a<=6)
        {
            a++;
            x++;
        }
        if(y%x==0){
                z=y/x;
        printf("1/%d\n",z);}
    }
    else
        printf("0/1\n");
    return 0;
}
