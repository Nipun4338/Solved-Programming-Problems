#include<bits/stdc++.h>

int main()
{
    int a,b,i,c,d;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d%d",&b,&c,&d);
        if(b<=20 && c<=20 && d<=20)
        {
            printf("Case %d: good\n",i+1);
        }
        else
            printf("Case %d: bad\n",i+1);
    }
    return 0;
}
