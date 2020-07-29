#include<stdio.h>
int main()
{
    long long int a,b,c;
    int i,j;
    scanf("%lld%lld",&a,&b);
    for(i=0,j=1,c=0; i<100000000,j<100000000; i++,j++)
    {
        if(a>b)
        {
            c=a*j;
            if(c%b==0)
            {
                break;
            }
        }
        else if(a<b)
        {
            c=b*j;
            if(c%a==0)
            {
                break;
            }
        }
        else if(a==b)
        {
            c=a;
        }
    }
    printf("%lld\n",c);
}
