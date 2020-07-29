#include<stdio.h>
int main()
{
    long long int a,n=0,ans=0;
    scanf("%lld",&a);
    while(a>0)
    {
        n=a%10;
        if(n==4 || n==7)
        {
            ans++;
        }
        a=a/10;
    }
    if(ans==7 || ans==4)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
