#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,ans=0;
    int i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld%lld%lld%lld",&b,&c,&d,&e);
        ans=d/c;
        if(d%c==0)
        {
            ans--;
        }
        ans=ans+((b/c)-(e/c));
        printf("%lld\n",ans);
        ans=0;
    }
    return 0;
}
