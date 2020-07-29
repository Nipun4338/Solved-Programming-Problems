#include<bits/stdc++.h>

int main()
{
    int a,b,i,c=0,d=0,e=1;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        else
            for(i=0; i<a; i++)
        {
            scanf("%d",&b);
            if(b==0)
            {
                c++;
            }
            if(b>0 && b<=99)
            {
                d++;
            }
        }
        printf("Case %d: %d\n",e++,d-c);
        d=0;
        c=0;
    }
    return 0;
}
