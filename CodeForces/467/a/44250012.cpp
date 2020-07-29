#include<stdio.h>
int main()
{
    int a,b,c,i,ans=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d",&b,&c);
        if(c-b>=2)
        {
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
