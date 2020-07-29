#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,l,y=0,x;
    int i;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }
        else{
        for(i=0; i<=l; i++)
        {
            x=a*i*i+b*i+c;
            if(x%d==0)
            {
                y++;
            }
        }
        printf("%lld\n",y);
        y=0;
      }
    }
    return 0;
}
