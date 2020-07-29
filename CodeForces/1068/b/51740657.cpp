#include<stdio.h>
int main()
{
long long int a,i;
int b=0;
scanf("%lld",&a);
for(i=1;i*i<=a;i++)
{
    if(a%i==0)
        {{b++;}
    if(i*i<a)
        {b++;}}
}
printf("%d\n",b);
return 0;
}