#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c;
    int i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld",&b);
        c=sqrt(b/6);
        printf("%d\n",c);
    }
    return 0;
}
