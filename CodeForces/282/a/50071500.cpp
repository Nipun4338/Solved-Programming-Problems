#include<bits/stdc++.h>

int main()
{
    int a,i,x=0;
    char b[100];
    scanf("%d",&a);
    for(i=0,x=0; i<=a; i++)
    {
        gets(b);
        if(strcmp("X++",b)==0 || strcmp("++X",b)==0)
        {
            x++;
        }
        if(strcmp("X--",b)==0 || strcmp("--X",b)==0)
        {
            x--;
        }
    }
    printf("%d\n",x);
    return 0;
}
