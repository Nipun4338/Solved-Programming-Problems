#include<bits/stdc++.h>

int main()
{
    int a,i,x=0;
    char b[100];
    scanf("%d",&a);
    getchar();
    for(i=0,x=0; i<=a; i++)
    {
        gets(b);
        x=strlen(b);
        if(x>10 && x<=100){
        printf("%c%d%c\n",b[0],x-2,b[x-1]);
        }
        else
            puts(b);
    }
    return 0;
}
