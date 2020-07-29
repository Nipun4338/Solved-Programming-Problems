#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    gets(a);
    if(strchr(a,"hello")==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
