#include<bits/stdc++.h>

int main()
{
    int a,i,b,c=0;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b);
        c=c+b;
    }
    if(c>0)
    {
        printf("HARD\n");
    }
    else if(c==0)
    {
        printf("EASY\n");
    }
    return 0;
}
