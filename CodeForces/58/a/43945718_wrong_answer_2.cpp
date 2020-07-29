#include<stdio.h>
#include<string.h>

int main()
{
    char a[101];
    gets(a);
    if(strcmp(a,"ahhellllloou")==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
