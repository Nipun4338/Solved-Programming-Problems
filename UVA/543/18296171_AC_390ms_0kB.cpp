#include<bits/stdc++.h>

int check(int a)
{
    int i,b=0,c=1;
    b=sqrt(a);
    for(i=2; i<=b; i++)
    {
        if(a%i==0)
        {
            c=0;
        }
    }
    return c;
}

int main()
{
    int x,j,y=0;
    while(scanf("%d",&x)!=EOF)
    {
        if(x==0)
        {
            break;
        }
        else
        {for(j=3; j<=x; j++)
            {
                y=x-j;
                if(check(y) && check(j))
                {
                    printf("%d = %d + %d\n",x,j,y);
                    break;
                }
            }
        }
    }
    return 0;
}
