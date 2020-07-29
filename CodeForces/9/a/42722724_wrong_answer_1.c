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
            x++;
        }
        if(y%x==0){
                z=y/x;
        printf("1/%d",z);}
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
        printf("1/%d",z);}
    }
    return 0;
}
